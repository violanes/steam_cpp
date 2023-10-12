#include "session_data.hpp"
#include "../../networking/steam_language.hpp"

struct c_trade_info {
	uint64_t expiration;
	uint32_t partner;
	uint8_t confirmation_method;
	ETradeOfferState state;
	EResult result;
};

class c_trade_manager {
public:
	c_trade_manager(std::string_view partner, std::string_view token, uint64_t steam_id, session_data* session);

	void send();
	void cancel();

	c_trade_info poll_result();

	std::string get_id() { return m_trade_id; }

	void set_game_id(uint16_t game_id) { m_game_id = game_id; }
	void set_context_id(uint8_t context_id) { m_context_id = context_id; }
	void set_description(std::string_view desc) { m_description = desc; }

	void add_own_item(uint64_t asset_id, size_t count = 1) { m_local_assets.emplace_back(asset_id, count); }
	void add_partner_item(uint64_t asset_id, size_t count = 1) { m_partner_assets.emplace_back(asset_id, count); }

	[[nodiscard]] bool needs_mobile_confirmation() const { return m_mobile_confirmation; }
	[[nodiscard]] bool needs_email_confirmation() const { return m_email_confirmation; }
private:
	uint16_t m_game_id = 0;
	uint8_t m_context_id = 0;

	uint64_t m_steam_id = 0;
	std::string m_description;

	std::string m_partner;
	std::string m_token;

	session_data* m_session_data;

	std::vector<std::pair<uint64_t, size_t>> m_local_assets{};
	std::vector<std::pair<uint64_t, size_t>> m_partner_assets{};

	std::string m_trade_id;
	bool m_mobile_confirmation = false;
	bool m_email_confirmation = false;
};
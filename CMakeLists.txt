cmake_minimum_required(VERSION 3.23)
project(steam_cpp)

set(CMAKE_CXX_STANDARD 20)
set(Boost_USE_STATIC_LIBS ON)

add_compile_definitions(LIBARCHIVE_STATIC)
#add_compile_definitions(BOOST_IOSTREAMS_NO_LIB)

if(MSVC)
    add_compile_options(
            $<$<CONFIG:>:/MT>
            $<$<CONFIG:Debug>:/MTd>
            $<$<CONFIG:Release>:/MT>
    )
endif()

find_package(Boost 1.80 REQUIRED)
find_package(CryptoPP REQUIRED)
find_package(Protobuf REQUIRED)
find_package(CURL REQUIRED)

if(WIN32)
    link_libraries(ws2_32 wsock32)
endif()

link_directories(${Boost_LIBRARIES})

file(GLOB proto_files "structs/*.h" "structs/*.cc")

add_executable(steam_cpp main.cpp ${proto_files} networking/steam_language.hpp networking/c_tcp_connection.cpp networking/c_tcp_connection.hpp
        networking/i_connection.hpp networking/net_structures.hpp networking/c_encrypted_connection.cpp networking/c_encrypted_connection.hpp
        networking/encryption/i_encryption.hpp networking/encryption/c_encryption_with_hmac.cpp networking/encryption/c_encryption_with_hmac.hpp steam/cmc_client.cpp
        steam/cmc_client.hpp steam/steam_client/c_steam_client.cpp steam/steam_client/c_steam_client.hpp steam/steam_client/c_steam_user.cpp
        steam/steam_client/c_steam_user.hpp steam/steam_client/c_steam_handler.cpp steam/steam_client/c_steam_handler.hpp steam/steam_client/c_steam_friends.cpp
        steam/steam_client/c_steam_friends.hpp steam/web_api/c_web_api.cpp steam/web_api/c_web_api.hpp steam/web_api/c_steam_directory.cpp
        steam/web_api/c_steam_directory.hpp steam/steam_client/c_steam_trading.cpp steam/steam_client/c_steam_trading.hpp
        steam/authentication/c_steam_authentication.cpp steam/authentication/c_steam_authentication.hpp steam/steam_client/c_steam_unified_messages.cpp 
        steam/steam_client/c_steam_unified_messages.hpp steam/authentication/c_auth_session.cpp steam/authentication/c_auth_session.hpp 
        steam/authentication/c_credential_auth_session.cpp steam/authentication/c_credential_auth_session.hpp)

target_include_directories(steam_cpp PUBLIC ${Boost_INCLUDE_DIR})

target_include_directories(steam_cpp PUBLIC ${CURL_INCLUDE_DIR})
target_link_libraries(steam_cpp ${CURL_LIBRARIES})

target_include_directories(steam_cpp PUBLIC ${Protobuf_INCLUDE_DIR})
target_link_libraries(steam_cpp ${Protobuf_LIBRARIES})

target_include_directories(steam_cpp PUBLIC ${CryptoPP_INCLUDE_DIR})
target_link_libraries(steam_cpp ${CryptoPP_LIBRARIES})
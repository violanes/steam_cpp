# steam_cpp
 
Cross-platform framework that communicates directly with Steam servers and APIs, written in C++20.
**steam_cpp** can emulate both mobile and desktop clients, it also supports ma-files generated by [SDA](https://github.com/Jessecar96/SteamDesktopAuthenticator) for mobile client.

Please, don't use the project for any malicious purpose including but not limited to cheating, account stealing and trade api scamming...

## Installation guide:
1. Create a CMake project
2. Recursively clone this repository in your project's subdirectory
3. Make sure that you have all dependencies installed, or install them
4. Before defining your build targets in CMakeLists, add "add_subdirectory(path/to/steam_cpp)" command
5. After defining your build targets in CMakeLists, link the steam_cpp statically by calling "target_link_libraries(your_project steam_cpp)"

Note that it's not recommended to modify the original CMakeLists by adding additional targets to it as this particular approach will result in conflicts that need to be manually resolved every time you pull the new steam_cpp version.

## Dependencies:
- Boost (1.50+, but the latest stable is recommended)
- Protobuf (3+, protobuf used in project is 3.19.5)
- CryptoPP
- Curl (with TLS/SSL support)

## Features:
- Automated server lookup
- Logon
- Logoff
- Heartbeat
- Friends list parsing
- Traffic encryption (with HMAC support)
- Steam authentication (2fa support: via email, mobile confirmation and mobile code)
- Mobile Auth (confirmations, code generations)
- Steam browser with session support

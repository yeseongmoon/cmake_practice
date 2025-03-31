# CMake Practice

### ⚠️ WARNING: THIS IS JUST A PLAYGROUD

- Using cmake to create compile_commands.json
- Using cmake to link libraries that were not able to get linked.
- I will keep updating stuff that I am going to learn from now on.

#### What I have learned so far:

- cmake_minimum_required
- project keywod
- set keyword:
  - SRC_DIR, INCLUDE_DIR, LIB_DIR,
  - CMAKE_EXPORT_COMPILE_COMMANDS-->create a compile_commands file
- add_executable
- target_include_directories
- target_link_directories
- target_link_libraries
- if keyword for a simple cross compile --> if CMAKE_SYSTEM MATCHES Windows/Linux/Darwin : diffrent settings

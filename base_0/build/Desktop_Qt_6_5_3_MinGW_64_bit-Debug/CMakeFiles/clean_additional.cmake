# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\base_0_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\base_0_autogen.dir\\ParseCache.txt"
  "base_0_autogen"
  )
endif()

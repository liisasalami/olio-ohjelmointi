# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\gurggumobolaskin_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\gurggumobolaskin_autogen.dir\\ParseCache.txt"
  "gurggumobolaskin_autogen"
  )
endif()

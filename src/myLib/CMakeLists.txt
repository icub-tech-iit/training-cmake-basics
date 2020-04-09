
set(MY_LIB_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/myLib.cpp)
set(MY_LIB_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/include/myLib/myLib.h)

add_library(myLib ${MY_LIB_HEADERS} ${MY_LIB_SOURCES})

target_include_directories(myLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

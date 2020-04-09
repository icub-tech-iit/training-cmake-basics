
cmake_minimum_required(VERSION 3.5)
project(myExecutable LANGUAGES C CXX
                     VERSION 0.0.1)
# myLib
add_subdirectory(src/myLib)

# myExecutable exe
set(MY_SOURCES src/main.cpp)
add_executable(${PROJECT_NAME} ${MY_SOURCES})
target_compile_definitions(${PROJECT_NAME} PUBLIC USE_LIB)
target_link_libraries(${PROJECT_NAME} myLib)

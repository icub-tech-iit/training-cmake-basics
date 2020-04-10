
cmake_minimum_required(VERSION 3.5)
project(myExecutable LANGUAGES C CXX
                     VERSION 0.0.1)

# TODO we need to access to the CMakeLists.txt of myLib

# myExecutable exe
set(MY_SOURCES src/main.cpp)
add_executable(${PROJECT_NAME} ${MY_SOURCES})

# TODO we need to define the preprocessor definition USE_LIB for the target ${PROJECT_NAME}

# TODO we need to link ${PROJECT_NAME} to myLib

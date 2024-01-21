set(CMAKE_C_STANDARD 11)

cmake_minimum_required(VERSION 3.22)
project(test1 VERSION 1.0.0 LANGUAGES C)

include_directories(inc)

find_package(Threads REQUIRED)

set(C_SOURCE_FILES 
src/main.c
src/person.c)
add_executable(${PROJECT_NAME} ${C_SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/inc)


cmake_minimum_required(VERSION 3.10)
project(Moonopoly)

set(PROJECT_FOLDER "${CMAKE_CURRENT_SOURCE_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_FOLDER}/bin")
file(GLOB_RECURSE SRC "${PROJECT_FOLDER}/src/*.cpp")
add_executable(Moonopoly "${SRC}")
target_include_directories(Moonopoly PRIVATE "${PORJECT_FOLDER}/include")

target_link_libraries(Moonopoly lua)
target_link_libraries(Moonopoly SDL2)
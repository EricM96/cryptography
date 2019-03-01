cmake_minimum_required(VERSION 3.14)
project(cryptography)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(cryptTest ${SOURCES})
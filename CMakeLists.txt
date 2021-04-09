cmake_minimum_required(VERSION 3.0)
project (house)

# Add all cpp and hpp in source folder
file(GLOB SOURCES "source/*.cpp" "source/*.hpp")

add_executable(house ${SOURCES})
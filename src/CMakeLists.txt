# CMakeList.txt : CMake project for Hello_SFML, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Hello_SFML "Hello_SFML.cpp" "Hello_SFML.h")

# TODO: Add tests and install targets if needed.
target_link_libraries(Hello_SFML sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Hello_SFML")

#Build SFML
set(SFML_STATIC_LIBRARIES TRUE)
set(BUILD_SHARED_LIBS FALSE)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lib/sfml)

# Include sub-projects.
add_subdirectory ("src")

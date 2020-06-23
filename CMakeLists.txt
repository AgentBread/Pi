cmake_minimum_required(VERSION 3.10.2)
project(Pi)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SFML_INCLUDE_DIR "/home/stephi/Desktop/Codes/SFML-2.5.1/include")
set(SFML_LIBRARY_DIR "/home/stephi/Desktop/Codes/SFML-2.5.1/lib")
link_directories("/home/stephi/Desktop/Codes/SFML-2.5.1/lib")
include_directories("/home/stephi/Desktop/Codes/SFML-2.5.1/include")
set(SFML_DIR "/home/stephi/Desktop/Codes/SFML-2.5.1/SFML")
find_package(SFML 2.5.0 COMPONENTS system window graphics network audio)

if(SFML_FOUND)

    message(STATUS "SFML_INCLUDE_DIRS: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")

    include_directories(${SFML_INCLUDE_DIRS})

endif()
add_executable(Pi pi.cpp)

target_link_libraries (Pi sfml-graphics sfml-window sfml-system)
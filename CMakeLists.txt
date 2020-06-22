cmake_minimum_required(VERSION 3.10.2)
project(Pi)

set(CMAKE_CXX_STANDARD 17)
set(CORE_HEADER_SRC ${PROJECT_SOURCE_DIR}/.)

file(GLOB CORE_SOURCES ${PROJECT_SOURCE_DIR}/*.cpp)

add_executable(Pi ${CORE_SOURCES})

include_directories(${CORE_HEADER_SRC})
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2 REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Pi ${SFML_LIBRARIES})
endif()

cmake_minimum_required(VERSION 3.2)

project(hello_world)

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH $ENV{TRAVIS_BUILD_NUMBER})

add_definitions(-DAPP_VERSION_MAJOR="${PROJECT_VERSION_MAJOR}")
add_definitions(-DAPP_VERSION_MINOR="${PROJECT_VERSION_MINOR}")
add_definitions(-DAPP_VERSION_PATCH="${PROJECT_VERSION_PATCH}")
add_definitions(-DAPP_VERSION_TWEAK="${PROJECT_VERSION_TWEAK}")

add_executable(hello_world main.cpp app.cpp)

set_target_properties(hello_world PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )

install(TARGETS hello_world RUNTIME DESTINATION bin)

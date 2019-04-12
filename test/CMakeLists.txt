cmake_minimum_required(VERSION 3.2)

project(hello_wolrd_test)

add_library(hw_app ../src/app.cpp)
add_executable(test_version test_version.cpp)

add_definitions(-DAPP_VERSION_MAJOR="4")
add_definitions(-DAPP_VERSION_MINOR="3")
add_definitions(-DAPP_VERSION_PATCH="2")
add_definitions(-DAPP_VERSION_TWEAK="1")

find_package(Boost COMPONENTS unit_test_framework REQUIRED)

set_target_properties(test_version PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wall;-Wextra"
        )
set_target_properties(test_version PROPERTIES
        COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
        INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
        )

target_link_libraries(test_version hw_app)
target_link_libraries(test_version ${Boost_LIBRARIES})

enable_testing()
add_test(${PROJECT_NAME}_executable test_version)

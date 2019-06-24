cmake_minimum_required(VERSION 2.8)

# Disable insource build - to keep source neat
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
	message(SEND_ERROR "In-source builds are not allowed.")
endif ()

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

project( camera_localization )

set(EXE_NAME "${PROJECT_NAME}-bin")  
# list of all cmake variables: https://cmake.org/cmake/help/v3.0/manual/cmake-variables.7.html

# Set compiler options to extend capabilities for error reportings
if(MSVC)
	add_compile_options(/W4)
else()
	add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(
		${PROJECT_SOURCE_DIR}
)
# The list of default include directories can be seen by running the command (in terminal): echo | g++ -E -Wp,-v -  # don't forget the last minus sign

add_subdirectory(executables)
add_subdirectory(pattern_localization)

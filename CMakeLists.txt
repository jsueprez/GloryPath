cmake_minimum_required(VERSION 3.5)

set(PROJECT_CODE_NAME "GloryPath")

project(${PROJECT_CODE_NAME} LANGUAGES CXX)

######################################################################################
# Compiler specific configurations
######################################################################################
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

######################################################################################
# Definition of the source/headers files
######################################################################################
set(CORE_SOURCE
  src/module/widget.cpp
  src/module/computing.cpp
  )

set(CORE_HEADERS
  src/module/widget.h
  src/module/computing.h
  )

file(GLOB TEST_SOURCE
    src/test/test1.cpp
    src/test/testComputing.cpp
    src/test/main.cpp
    )

set(ALL_SRC_CODE ${CORE_SOURCE} ${CORE_HEADERS})

include_directories(src)
include_directories(src/module)

######################################################################################
# Source code static library
######################################################################################
add_library(${PROJECT_CODE_NAME}_library STATIC ${ALL_SRC_CODE})

######################################################################################
# Adding Executable
######################################################################################
add_executable(${PROJECT_CODE_NAME}_executable src/main.cpp)
target_link_libraries(${PROJECT_CODE_NAME}_executable ${PROJECT_CODE_NAME}_library)

######################################################################################
# Google Test Framework
######################################################################################
# Prevent GoogleTest from overriding our compiler/linker options
# when building with Visual Studio
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_subdirectory(src/ext/google/googletest)
include_directories (
  src/ext/google/googletest/googletest/src
  ${CMAKE_SOURCE_DIR}/src/ext/google/googletest/googletest/src
)

add_executable(${PROJECT_CODE_NAME}_tests ${TEST_SOURCE})
target_link_libraries(${PROJECT_CODE_NAME}_tests
                      ${PROJECT_CODE_NAME}_library gtest)

######################################################################################
# Adding CMAKE Test
######################################################################################
add_test(test_name ${PROJECT_CODE_NAME}_tests)


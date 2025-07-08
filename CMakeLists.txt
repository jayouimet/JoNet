project ("JoNet")

add_subdirectory ("src")

cmake_minimum_required(VERSION 3.16)
project(JoNet LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  spdlog
  GIT_REPOSITORY https://github.com/gabime/spdlog.git
  GIT_TAG        v1.11.0
)

FetchContent_MakeAvailable(spdlog)

file(GLOB_RECURSE JN_SOURCES
  ${CMAKE_SOURCE_DIR}/src/*.cpp
)

file(GLOB_RECURSE JN_HEADERS
  CONFIGURE_DEPENDS
  ${CMAKE_SOURCE_DIR}/include/*.h
  ${CMAKE_SOURCE_DIR}/include/*.hpp
)

add_library(JoNet STATIC
  ${JN_SOURCES}
  ${JN_HEADERS}
 "include/Optimizers/Optimizer.h" "include/Optimizers/OptimizerType.h" "include/Layers/LayerType.h")

target_precompile_headers(JoNet
  PRIVATE include/pch.h
)

target_include_directories(JoNet
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
)

target_compile_definitions(JoNet
  PRIVATE
    _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING
)

target_link_libraries(JoNet
  PUBLIC
    spdlog::spdlog_header_only
)

add_subdirectory(sandbox)
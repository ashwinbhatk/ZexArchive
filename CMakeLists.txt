cmake_minimum_required(VERSION 3.20)

project(ZexArchive
    VERSION 0.1.0
    DESCRIPTION "A cross-platform command-line archive utility"
    LANGUAGES CXX
)

add_executable(zexarchive
    src/main.cpp
)

target_compile_features(zexarchive PRIVATE cxx_std_20)

set_target_properties(zexarchive PROPERTIES
    CXX_EXTENSIONS OFF
)

if(MSVC)
    target_compile_options(zexarchive PRIVATE /W4)
else()
    target_compile_options(zexarchive PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()

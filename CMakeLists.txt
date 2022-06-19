cmake_minimum_required(VERSION 3.18)

project(calc VERSION 1.0)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/main.c)

set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 99)

target_link_libraries(${PROJECT_NAME}
    PRIVATE util # library name, not path
)


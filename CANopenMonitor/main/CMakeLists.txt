set(srcs    "main.c")

file(GLOB_RECURSE SRC_UI ${CMAKE_SOURCE_DIR} "ui/*.c")

set(include_dirs "." "ui")

idf_component_register(SRCS ${srcs} ${SRC_UI}
                    INCLUDE_DIRS ${include_dirs})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-error=parentheses)
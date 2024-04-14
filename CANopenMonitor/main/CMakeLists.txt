set(srcs    "main.c" "OD.c")

file(GLOB_RECURSE SRC_UI ${CMAKE_SOURCE_DIR} "ui/*.c")
file(GLOB_RECURSE SRC_CO_APP ${CMAKE_SOURCE_DIR} "canopen/*.c")

set(include_dirs "." "ui" "canopen")

idf_component_register(SRCS ${srcs} ${SRC_UI} ${SRC_CO_APP}
                    INCLUDE_DIRS ${include_dirs})

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-error=parentheses)
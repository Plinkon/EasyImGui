cmake_minimum_required(VERSION 3.10)

project(easyImGui CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build)

# Include directories
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/include/imgui
)

# Source files
set(IMGUI_SOURCES
    include/imgui/imgui.cpp
    include/imgui/imgui_draw.cpp
    include/imgui/imgui_tables.cpp
    include/imgui/imgui_widgets.cpp
    include/imgui/imgui_demo.cpp
    include/imgui/imgui_impl/imgui_impl_win32.cpp
    include/imgui/imgui_impl/imgui_impl_dx9.cpp
)

set(APP_SOURCES
    src/main.cpp
)

add_executable(easyImGui ${APP_SOURCES} ${IMGUI_SOURCES})

# Link libraries
# These libraries are specific to Windows and DirectX 9.
# You might need to adjust these for other platforms or graphics APIs.
target_link_libraries(easyImGui
    PRIVATE
        d3d9
        gdi32
        dwmapi
)

# Compiler flags for Debug configuration
target_compile_definitions(easyImGui
    PRIVATE
        $<$<CONFIG:Debug>:_DEBUG>
)

target_compile_options(easyImGui
    PRIVATE
        $<$<CONFIG:Debug>:-g>
        $<$<CONFIG:Debug>:-O0>
        $<$<CONFIG:Debug>:-Wall -Wextra>
)

# Compiler flags for Release configuration
target_compile_definitions(easyImGui
    PRIVATE
        $<$<CONFIG:Release>:NDEBUG>
)

target_compile_options(easyImGui
    PRIVATE
        $<$<CONFIG:Release>:-O3>
)

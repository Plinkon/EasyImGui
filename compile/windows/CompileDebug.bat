rem debug.bat
@echo off
cls
echo Compiling..
g++ src/main.cpp ^
    include/imgui/imgui.cpp ^
    include/imgui/imgui_draw.cpp ^
    include/imgui/imgui_tables.cpp ^
    include/imgui/imgui_widgets.cpp ^
    include/imgui/imgui_demo.cpp ^
    include/imgui/imgui_impl/imgui_impl_win32.cpp ^
    include/imgui/imgui_impl/imgui_impl_dx9.cpp ^
    -Iinclude ^
    -Iinclude/imgui ^
    -o build/main_debug.exe ^
    -ld3d9 -lgdi32 -ldwmapi ^
    -D_DEBUG -g -O0 -Wall -Wextra
echo Compiled!
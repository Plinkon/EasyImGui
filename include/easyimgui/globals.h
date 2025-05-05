// globals.h
// basically the config for the project

#pragma once

#include <Windows.h>
#include "../imgui/imgui.h"
#include "../imgui/imgui_internal.h"
#include "style.h"

namespace GLOBAL {
    // add your own global variables here..
}

namespace CONFIG {
    bool IsRunning = false; // DO NOT CHANGE THIS, changing this will make ImGui not run

    /*---WINDOW SETTINGS (not imgui window)---*/
    const bool useTransparentWindow = true; // Wether or not the background window, NOT the ImGui window, is transparent and has no title bar and such
    const WCHAR* WindowName = L"Easy ImGui"; // The application name, NOT ImGui window name
    const int WindowWidth = 1280; // How wide the window is 
    const int WindowHeight = 720; // How tall the window is
    const int WindowXpos = 100; // The X posistion of where the window will be on the screen
    const int WindowYpos = 100; // The Y position of where the window will be on the screen

    /*---IMGUI SETTINGS---*/
    DWORD ImGui_WindowFlags = ImGuiWindowFlags_NoSavedSettings; // + | ImGuiWindowFlags_... | ImGuiWindowFlags_... | ImGuiWindowFlags_...
    ImVec2 ImGui_WindowSize = { 1180, 520 }; // The first drawn ImGui window starting size
    ImVec2 ImGui_WindowPos = { 500, 500 }; // The first drawn ImGui window position on screen
    bool useCustomFont = true; // true = use a custom font, false = use default ImGui font
    float customFontSize = 20.0f; // Font size for the custom font
    const char* customFontName = "CascadiaCode"; // Available fonts: Roboto, OpenSans, CascadiaCode | (all fonts are regular)

    /*---STYLING---*/
    void setStyle() {
        STYLE::runStyle("Dark"); // Edit this to set the default style
                                 // Available style are: Dark, Light, Classic, DarkGrayScale, CRTRetro, Cyberpunk, CrimsonDark, CobaltDark, VSCode
    }
}
// ui.hpp
// where you write your imgui code

#pragma once

#include "../imgui/imgui.h"
#include "globals.h"

void eiGUIdemo(); // forward declare

// function to call imgui window stuff ONLY FOR THE FIRST IMGUI WINDOW THAT IS MADE before running
void beforeRun() {
    ImGui::SetNextWindowSize(CONFIG::ImGui_WindowSize);
    ImGui::SetNextWindowPos(CONFIG::ImGui_WindowPos);
}


// declaring variables for ui
bool demowindow = false;

// Function that runs the ImGui UI
void runUI() {
    // Use this function to write your ImGui GUI/Application code.

    eiGUIdemo(); // Example demo window for this project.
}

void eiGUIdemo() {
    // Starting a window with config settings:
    ImGui::Begin("Easy ImGui", &CONFIG::IsRunning, CONFIG::ImGui_WindowFlags);

    if (demowindow) {
        ImGui::ShowDemoWindow(&demowindow);
    }

    // Create a tab bar
    if (ImGui::BeginTabBar("EasyImGuiTabs")) {

        // Main Tab
        if (ImGui::BeginTabItem("Main")) {
            ImGui::Text("Welcome to Easy ImGui!");
            ImGui::Separator();
            ImGui::Spacing();

            ImGui::TextWrapped("Welcome to EasyImGui! EasyImGui provides a easy way to quickly setup and run ImGui to create your own applications. EasyImGui abstracts those confusing first steps to just be able to start coding and making ImGui apps. Have fun coding!");

            // Example widgets
            ImGui::Spacing();
            if (ImGui::Button("Click me to open the demo window!")) {
                demowindow = true;
            }
            ImGui::NewLine();
            static float sliderValue = 0.0f;
            ImGui::SliderFloat("Example Slider", &sliderValue, 0.0f, 100.0f);

            static char textInput[128] = "";
            ImGui::InputText("Example Text Input", textInput, IM_ARRAYSIZE(textInput));

            ImGui::Spacing();
            ImGui::Text("More project details can go here...");

            ImVec2 ScreenSize = ImGui::GetWindowSize();
            ImGui::TextDisabled("Window Size: X %.0f, Y %.0f", ScreenSize.x, ScreenSize.y);

            ImGui::EndTabItem();
        }

        // Theme Tab
        if (ImGui::BeginTabItem("Theme")) {
            ImGui::Text("Choose your theme:");
            ImGui::Separator();
            ImGui::Spacing();

            const char* themes[] = {
                "Dark",
                "Light",
                "Classic",
                "DarkGrayScale",
                "CRTRetro",
                "Cyberpunk",
                "CrimsonDark",
                "CobaltDark",
                "VSCode"
            };
            static int currentThemeIndex = 0; // Keep track of the currently selected theme

            // Combo box for theme selection
            if (ImGui::BeginCombo("##ThemesCombo", themes[currentThemeIndex])) {
                for (int i = 0; i < IM_ARRAYSIZE(themes); i++) {
                    const bool isSelected = (currentThemeIndex == i);
                    if (ImGui::Selectable(themes[i], isSelected)) {
                        currentThemeIndex = i;
                        STYLE::runStyle(themes[currentThemeIndex]); // Apply the selected theme
                    }
                    if (isSelected) {
                        ImGui::SetItemDefaultFocus(); // Set the initial focus when opening the combo
                    }
                }
                ImGui::EndCombo();
            }

            ImGui::Spacing();
            ImGui::Text("Applying a theme will change the look and feel of the UI.");

            ImGui::EndTabItem();
        }

        // Widgets Showcase Tab (New Tab)
        if (ImGui::BeginTabItem("Widgets Showcase")) {
            ImGui::Text("Demonstration of various ImGui widgets:");
            ImGui::Separator();
            ImGui::Spacing();

            // Checkboxes
            static bool checkbox1 = false;
            static bool checkbox2 = true;
            ImGui::Checkbox("Checkbox 1", &checkbox1);
            ImGui::Checkbox("Checkbox 2", &checkbox2);

            ImGui::Spacing();

            // Radio Buttons
            static int radioChoice = 0;
            ImGui::Text("Choose an option:");
            ImGui::RadioButton("Option A", &radioChoice, 0);
            ImGui::SameLine();
            ImGui::RadioButton("Option B", &radioChoice, 1);
            ImGui::SameLine();
            ImGui::RadioButton("Option C", &radioChoice, 2);

            ImGui::Spacing();

            // Sliders
            static float floatSlider = 50.0f;
            ImGui::SliderFloat("Float Slider", &floatSlider, 0.0f, 100.0f, "Value = %.1f");

            static int intSlider = 10;
            ImGui::SliderInt("Int Slider", &intSlider, 0, 50);

            ImGui::Spacing();

            // Input Fields
            static char inputText[128] = "Editable Text";
            ImGui::InputText("Text Input", inputText, IM_ARRAYSIZE(inputText));

            static int intInput = 123;
            ImGui::InputInt("Integer Input", &intInput);

            static float floatInput = 45.67f;
            ImGui::InputFloat("Float Input", &floatInput, 0.1f, 1.0f, "%.2f");

            ImGui::Spacing();

            // Combo Box (Dropdown)
            const char* items[] = { "Item 1", "Item 2", "Item 3", "Item 4" };
            static int itemCurrentIdx = 0; // Here we store our selection data as an index.
            const char* comboPreviewValue = items[itemCurrentIdx]; // This is the preview value visible before opening the combo.
            if (ImGui::BeginCombo("Combo Box", comboPreviewValue)) {
                for (int n = 0; n < IM_ARRAYSIZE(items); n++) {
                    const bool isSelected = (itemCurrentIdx == n);
                    if (ImGui::Selectable(items[n], isSelected))
                        itemCurrentIdx = n;

                    // Set the initial focus when opening the combo (scrolling + keyboard navigation focus)
                    if (isSelected)
                        ImGui::SetItemDefaultFocus();
                }
                ImGui::EndCombo();
            }

            ImGui::Spacing();

            // List Box
            static int listboxItemCurrent = 0;
            ImGui::Text("List Box:");
            ImGui::ListBox("##ListBox", &listboxItemCurrent, items, IM_ARRAYSIZE(items), 4);

            ImGui::Spacing();

            // Progress Bar
            static float progress = 0.0f;
            ImGui::ProgressBar(progress, ImVec2(-1.0f, 0.0f), "Progress");
            ImGui::SameLine();
            if (ImGui::Button("Increase Progress")) {
                progress += 0.1f;
                if (progress > 1.0f) progress = 1.0f;
            }

            ImGui::Spacing();

            // Color Picker
            static ImVec4 color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
            ImGui::ColorEdit4("Color Picker", (float*)&color);

            ImGui::Spacing();

            // Tooltips (Hover over the text)
            ImGui::Text("Hover over me for a tooltip.");
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::Text("This is a tooltip!");
                ImGui::EndTooltip();
            }

            ImGui::Spacing();

            // Collapsing Header
            if (ImGui::CollapsingHeader("Collapsible Section")) {
                ImGui::Text("Content inside the collapsible section.");
                ImGui::SliderFloat("Another Slider", &floatSlider, 0.0f, 100.0f);
            }

            ImGui::Spacing();

            // Trees (Hierarchy)
            if (ImGui::TreeNode("Tree Node 1")) {
                ImGui::Text("Child item 1");
                ImGui::Text("Child item 2");
                if (ImGui::TreeNode("Sub Tree Node")) {
                    ImGui::Text("Sub-child item A");
                    ImGui::Text("Sub-child item B");
                    ImGui::TreePop();
                }
                ImGui::TreePop();
            }

            ImGui::EndTabItem();
        }

        ImGui::EndTabBar();
    }

    ImGui::End();
}
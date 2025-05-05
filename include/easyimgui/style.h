// style.h

#pragma once

#include "../imgui/imgui.h"

namespace STYLE {
    // Define your styles as functions
    void ApplyDarkStyle() {
        ImGui::StyleColorsDark();
    }

    void ApplyLightStyle() {
        ImGui::StyleColorsLight();
    }

    void ApplyClassicStyle() {
        ImGui::StyleColorsClassic();
    }

    void ApplyDarkGrayScale() {
        ImGuiStyle* style = &ImGui::GetStyle();
    
        // Dark Gray Scale Colors - tuned for night use
        style->Colors[ImGuiCol_Text] = ImVec4(0.90f, 0.90f, 0.90f, 1.00f);
        style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style->Colors[ImGuiCol_WindowBg] = ImVec4(0.10f, 0.10f, 0.10f, 0.98f);
        style->Colors[ImGuiCol_ChildBg] = ImVec4(0.05f, 0.05f, 0.05f, 0.00f);
        style->Colors[ImGuiCol_PopupBg] = ImVec4(0.15f, 0.15f, 0.15f, 0.98f);
        style->Colors[ImGuiCol_Border] = ImVec4(0.30f, 0.30f, 0.30f, 0.50f);
        style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.10f, 0.10f, 0.10f, 0.50f);
        style->Colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.20f, 0.20f, 0.60f);
        style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.25f, 0.25f, 0.70f);
        style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.30f, 0.30f, 0.30f, 0.80f);
        style->Colors[ImGuiCol_TitleBg] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);
        style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f);
        style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.04f, 0.04f, 0.04f, 0.51f);
        style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.12f, 0.12f, 0.12f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.03f, 0.03f, 0.03f, 0.53f);
        style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.60f, 0.60f, 0.60f, 1.00f);
        style->Colors[ImGuiCol_CheckMark] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
        style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.45f, 0.45f, 0.45f, 1.00f);
        style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.55f, 0.55f, 0.55f, 1.00f);
        style->Colors[ImGuiCol_Button] = ImVec4(0.20f, 0.20f, 0.20f, 0.40f);
        style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.30f, 0.30f, 0.30f, 1.00f);
        style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
        style->Colors[ImGuiCol_Header] = ImVec4(0.25f, 0.25f, 0.25f, 0.31f);
        style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.35f, 0.35f, 0.35f, 0.80f);
        style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.45f, 0.45f, 0.45f, 1.00f);
        style->Colors[ImGuiCol_Separator] = style->Colors[ImGuiCol_Border];
        style->Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.20f, 0.20f, 0.20f, 0.78f);
        style->Colors[ImGuiCol_SeparatorActive] = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
        style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.35f, 0.35f, 0.35f, 0.25f);
        style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.45f, 0.45f, 0.45f, 0.67f);
        style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.55f, 0.55f, 0.55f, 0.95f);
        style->Colors[ImGuiCol_PlotLines] = ImVec4(0.80f, 0.80f, 0.80f, 1.00f);
        style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.50f, 0.50f, 1.00f); // Slightly reddish for
                                                                                     // visibility
        style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.70f, 0.70f, 0.00f, 1.00f); // Slightly yellowish for
                                                                                   // visibility
        style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.80f, 0.80f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.35f, 0.35f, 0.35f, 0.35f);
        style->Colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
        style->Colors[ImGuiCol_NavHighlight] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
        style->Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
        style->Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.60f, 0.60f, 0.60f, 0.20f);
        style->Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.60f, 0.60f, 0.60f, 0.35f);
        style->Colors[ImGuiCol_DockingPreview] = ImVec4(0.30f, 0.30f, 0.30f, 0.70f);
        style->Colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.15f, 0.15f, 0.15f, 1.00f);
        style->Colors[ImGuiCol_Tab] = ImVec4(0.12f, 0.12f, 0.12f, 0.86f);
        style->Colors[ImGuiCol_TabHovered] = ImVec4(0.20f, 0.20f, 0.20f, 0.80f);
        style->Colors[ImGuiCol_TabActive] = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
        style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.06f, 0.06f, 0.06f, 0.97f);
        style->Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
    
        // Theme Attributes (adjustments for a comfortable night theme)
        style->WindowRounding = 4.0f;        // Slightly rounded windows
        style->WindowPadding = ImVec2(10, 10); // More padding
        style->WindowBorderSize = 1.0f;
        style->WindowMinSize = ImVec2(40, 40);
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f);
        style->ChildRounding = 4.0f; // Slightly rounded children
        style->ChildBorderSize = 1.0f;
        style->PopupRounding = 4.0f; // Slightly rounded popups
        style->PopupBorderSize = 1.0f;
        style->FramePadding = ImVec2(6, 4); // More frame padding
        style->FrameRounding = 4.0f; // Slightly rounded frames
        style->FrameBorderSize = 0.0f;
        style->ItemSpacing = ImVec2(8, 6); // Increased item spacing
        style->ItemInnerSpacing = ImVec2(6, 6);
        style->CellPadding = ImVec2(6, 3);
        style->TouchExtraPadding = ImVec2(0, 0);
        style->IndentSpacing = 21.0f;
        style->ColumnsMinSpacing = 6.0f;
        style->ScrollbarSize = 12.0f; // Slightly smaller scrollbars
        style->ScrollbarRounding = 9.0f;
        style->GrabRounding = 4.0f; // Rounded grab handles
        style->GrabMinSize = 8.0f;  // Larger grab handles
        style->LogSliderDeadzone = 4.0f;
        style->TabRounding = 4.0f;
        style->TabBorderSize = 1.0f;
        style->TabCloseButtonMinWidthSelected = 0.0f;
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f);
        style->DisplayWindowPadding = ImVec2(19, 19);
        style->DisplaySafeAreaPadding = ImVec2(3, 3);
        style->MouseCursorScale = 1.0f;
        style->AntiAliasedLines = true;
        style->AntiAliasedLinesUseTex = true;
        style->AntiAliasedFill = true;
        style->CurveTessellationTol = 1.25f;
        style->CircleTessellationMaxError = 1.60f;
        style->Alpha = 1.0f;
        style->DisabledAlpha = 0.6f;
        style->WindowMenuButtonPosition = ImGuiDir_Left;
        style->ColorButtonPosition = ImGuiDir_Right;
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    }

    void ApplyCRTRetroStyle() {
        ImGuiStyle* style = &ImGui::GetStyle();
    
        // CRT Retro Colors - mimicking old CRT monitors, slightly muted and green/amber
        style->Colors[ImGuiCol_Text] = ImVec4(0.80f, 1.00f, 0.80f, 1.00f); // Bright green text
        style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.60f, 0.50f, 1.00f);
        style->Colors[ImGuiCol_WindowBg] = ImVec4(0.08f, 0.10f, 0.08f, 0.95f); // Dark green-tinged background
        style->Colors[ImGuiCol_ChildBg] = ImVec4(0.05f, 0.08f, 0.05f, 0.00f);
        style->Colors[ImGuiCol_PopupBg] = ImVec4(0.12f, 0.15f, 0.12f, 0.95f);
        style->Colors[ImGuiCol_Border] = ImVec4(0.20f, 0.30f, 0.20f, 0.60f); // Green-tinged border
        style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.08f, 0.10f, 0.08f, 0.50f);
        style->Colors[ImGuiCol_FrameBg] = ImVec4(0.15f, 0.20f, 0.15f, 0.70f); // Green-tinged frame background
        style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.20f, 0.25f, 0.20f, 0.80f);
        style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.25f, 0.30f, 0.25f, 0.90f);
        style->Colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.08f, 0.05f, 1.00f); // Darker green title
        style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.10f, 0.15f, 0.10f, 1.00f);
        style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.03f, 0.05f, 0.03f, 0.51f);
        style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.10f, 0.12f, 0.10f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.03f, 0.02f, 0.53f);
        style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.30f, 0.40f, 0.30f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.40f, 0.50f, 0.40f, 1.00f);
        style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.50f, 0.60f, 0.50f, 1.00f);
        style->Colors[ImGuiCol_CheckMark] = ImVec4(0.40f, 0.50f, 0.40f, 1.00f); // Green checkmark
        style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.35f, 0.45f, 0.35f, 1.00f);
        style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.45f, 0.55f, 0.45f, 1.00f);
        style->Colors[ImGuiCol_Button] = ImVec4(0.15f, 0.20f, 0.15f, 0.50f); // Green-tinged button
        style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.25f, 0.35f, 0.25f, 1.00f);
        style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.35f, 0.45f, 0.35f, 1.00f);
        style->Colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.20f, 0.40f); // Green-tinged header
        style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.30f, 0.40f, 0.30f, 0.80f);
        style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.40f, 0.50f, 0.40f, 1.00f);
        style->Colors[ImGuiCol_Separator] = style->Colors[ImGuiCol_Border];
        style->Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.15f, 0.20f, 0.15f, 0.78f);
        style->Colors[ImGuiCol_SeparatorActive] = ImVec4(0.20f, 0.25f, 0.20f, 1.00f);
        style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.30f, 0.40f, 0.30f, 0.30f);
        style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.40f, 0.50f, 0.40f, 0.70f);
        style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.50f, 0.60f, 0.50f, 0.95f);
        style->Colors[ImGuiCol_PlotLines] = ImVec4(0.70f, 0.90f, 0.70f, 1.00f); // Green plot lines
        style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.60f, 0.60f, 1.00f);
        style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.80f, 0.80f, 0.00f, 1.00f); // Yellow histogram
        style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 1.00f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 0.35f, 0.25f, 0.35f);
        style->Colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
        style->Colors[ImGuiCol_NavHighlight] = ImVec4(0.35f, 0.45f, 0.35f, 1.00f);
        style->Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
        style->Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.60f, 0.60f, 0.60f, 0.20f);
        style->Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.60f, 0.60f, 0.60f, 0.35f);
        style->Colors[ImGuiCol_DockingPreview] = ImVec4(0.25f, 0.35f, 0.25f, 0.70f);
        style->Colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
        style->Colors[ImGuiCol_Tab] = ImVec4(0.10f, 0.12f, 0.10f, 0.86f);
        style->Colors[ImGuiCol_TabHovered] = ImVec4(0.15f, 0.20f, 0.15f, 0.80f);
        style->Colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.20f, 1.00f);
        style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.05f, 0.06f, 0.05f, 0.97f);
        style->Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.08f, 0.10f, 0.08f, 1.00f);
    
        // Theme Attributes - mimicking CRT characteristics
        style->WindowRounding = 0.0f; // Sharp corners
        style->WindowPadding = ImVec2(8, 8);
        style->WindowBorderSize = 1.0f; // Visible border
        style->WindowMinSize = ImVec2(32, 32);
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f);
        style->ChildRounding = 0.0f;
        style->ChildBorderSize = 1.0f;
        style->PopupRounding = 0.0f;
        style->PopupBorderSize = 1.0f;
        style->FramePadding = ImVec2(4, 3);
        style->FrameRounding = 0.0f;
        style->FrameBorderSize = 1.0f; // Visible frame border
        style->ItemSpacing = ImVec2(6, 4); // Slightly tighter spacing
        style->ItemInnerSpacing = ImVec2(4, 4);
        style->CellPadding = ImVec2(4, 2);
        style->TouchExtraPadding = ImVec2(0, 0);
        style->IndentSpacing = 20.0f; // Typical indent
        style->ColumnsMinSpacing = 6.0f;
        style->ScrollbarSize = 14.0f;
        style->ScrollbarRounding = 0.0f; // Sharp scrollbar
        style->GrabRounding = 0.0f;  // Sharp grab handles
        style->GrabMinSize = 6.0f;
        style->LogSliderDeadzone = 4.0f;
        style->TabRounding = 0.0f; // Sharp tabs
        style->TabBorderSize = 1.0f;
        style->TabCloseButtonMinWidthSelected = 0.0f;
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f);
        style->DisplayWindowPadding = ImVec2(19, 19);
        style->DisplaySafeAreaPadding = ImVec2(3, 3);
        style->MouseCursorScale = 1.0f;
        style->AntiAliasedLines = false; // Mimic pixelated lines
        style->AntiAliasedLinesUseTex = false;
        style->AntiAliasedFill = false; // Mimic pixelated fill
        style->CurveTessellationTol = 1.0f; // Less tessellation
        style->CircleTessellationMaxError = 2.0f;
        style->Alpha = 1.0f;
        style->DisabledAlpha = 0.6f;
        style->WindowMenuButtonPosition = ImGuiDir_Left;
        style->ColorButtonPosition = ImGuiDir_Right;
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    }

    void ApplyCyberpunkStyle() {
        ImGuiStyle* style = &ImGui::GetStyle();

        // Cyberpunk Color Palette (Electric Blues, Neon Pinks, Deep Purples,
        // accompanied by dark greys and blacks)
        style->Colors[ImGuiCol_Text] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);         // Neon Aqua
        style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f); // Dark Grey
        style->Colors[ImGuiCol_WindowBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.90f);     // Deep Black
        style->Colors[ImGuiCol_ChildBg] = ImVec4(0.10f, 0.10f, 0.10f, 0.00f);      // Transparent Dark
        style->Colors[ImGuiCol_PopupBg] = ImVec4(0.12f, 0.05f, 0.15f, 0.94f);     // Deep Purple
        style->Colors[ImGuiCol_Border] = ImVec4(0.00f, 0.80f, 0.80f, 0.50f);      // Aqua Border (Semi-transparent)
        style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.50f); // Black Shadow
        style->Colors[ImGuiCol_FrameBg] = ImVec4(0.15f, 0.05f, 0.20f, 0.54f);     // Muted Purple (Semi-transparent)
        style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.30f, 0.10f, 0.40f, 0.60f); // More Vibrant Purple
        style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.40f, 0.15f, 0.50f, 0.80f); // Intense Purple
        style->Colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);     // Very Dark Grey
        style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.10f, 0.05f, 0.15f, 1.00f); // Dark Purple
        style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.70f); // Collapsed Black
        style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.08f, 0.08f, 0.08f, 1.00f);   // Deep Black
        style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.03f, 0.53f); // Slightly Blue-tinted Black
        style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.30f, 0.10f, 0.40f, 1.00f); // Purple Grab
        style->Colors[ImGuiCol_ScrollbarGrabHovered] =
            ImVec4(0.40f, 0.15f, 0.50f, 1.00f); // More Intense Purple Grab
        style->Colors[ImGuiCol_ScrollbarGrabActive] =
            ImVec4(0.50f, 0.20f, 0.60f, 1.00f); // Even More Intense Purple Grab
        style->Colors[ImGuiCol_CheckMark] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f);   // Neon Aqua Checkmark
        style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.00f, 0.80f, 0.80f, 1.00f);  // Aqua Slider Grab
        style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f); // Neon Aqua Slider Grab
        style->Colors[ImGuiCol_Button] = ImVec4(0.10f, 0.05f, 0.15f, 0.70f);     // Muted Purple Button
        style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.20f, 0.10f, 0.25f, 0.90f); // More Intense Purple Button Hover
        style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.30f, 0.15f, 0.35f, 1.00f); // Even More Intense Purple Button Active
        style->Colors[ImGuiCol_Header] = ImVec4(0.15f, 0.05f, 0.20f, 0.40f);     // Muted Purple Header
        style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.30f, 0.10f, 0.40f, 0.70f); // More Intense Purple Header Hover
        style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.40f, 0.15f, 0.50f, 0.90f); // Intense Purple Header Active
        style->Colors[ImGuiCol_Separator] = style->Colors[ImGuiCol_Border];      // Use Border Color for Separator
        style->Colors[ImGuiCol_SeparatorHovered] =
            ImVec4(0.00f, 1.00f, 1.00f, 0.80f); // Neon Aqua Separator Hover
        style->Colors[ImGuiCol_SeparatorActive] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f); // Neon Aqua Separator Active
        style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.80f, 0.80f, 0.30f);  // Aqua Resize Grip (Semi-transparent)
        style->Colors[ImGuiCol_ResizeGripHovered] =
            ImVec4(0.00f, 1.00f, 1.00f, 0.70f); // Neon Aqua Resize Grip Hover
        style->Colors[ImGuiCol_ResizeGripActive] =
            ImVec4(0.00f, 1.00f, 1.00f, 1.00f); // Neon Aqua Resize Grip Active
        style->Colors[ImGuiCol_PlotLines] = ImVec4(0.00f, 1.00f, 0.50f, 1.00f);  // Green Plot Lines
        style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.00f, 1.00f, 0.70f, 1.00f); // Brighter Green Plot Lines Hover
        style->Colors[ImGuiCol_PlotHistogram] = ImVec4(1.00f, 0.00f, 0.50f, 1.00f); // Pink Histogram
        style->Colors[ImGuiCol_PlotHistogramHovered] =
            ImVec4(1.00f, 0.00f, 0.70f, 1.00f); // Brighter Pink Histogram Hover
        style->Colors[ImGuiCol_TextSelectedBg] =
            ImVec4(0.00f, 1.00f, 1.00f, 0.35f); // Neon Aqua Text Selected Background (Semi-transparent)
        style->Colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 0.50f, 0.00f, 0.90f); // Orange Drag/Drop Target
        style->Colors[ImGuiCol_NavHighlight] = ImVec4(0.00f, 1.00f, 1.00f, 1.00f); // Neon Aqua Navigation Highlight
        style->Colors[ImGuiCol_NavWindowingHighlight] =
            ImVec4(1.00f, 1.00f, 1.00f, 0.70f); // White Windowing Highlight
        style->Colors[ImGuiCol_NavWindowingDimBg] =
            ImVec4(0.10f, 0.10f, 0.10f, 0.20f); // Dimmed Dark Background
        style->Colors[ImGuiCol_ModalWindowDimBg] =
            ImVec4(0.10f, 0.10f, 0.10f, 0.35f); // Dimmed Dark Modal Background
        style->Colors[ImGuiCol_DockingPreview] =
            ImVec4(0.00f, 1.00f, 1.00f, 0.70f); // Neon Aqua Docking Preview (Semi-transparent)
        style->Colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f); // Very Dark Empty Docking Area
        style->Colors[ImGuiCol_Tab] = ImVec4(0.08f, 0.04f, 0.10f, 0.86f);     // Dark Purple Tab (Semi-transparent)
        style->Colors[ImGuiCol_TabHovered] = ImVec4(0.20f, 0.08f, 0.25f, 0.80f); // More Intense Purple Tab Hover
        style->Colors[ImGuiCol_TabActive] = ImVec4(0.15f, 0.06f, 0.20f, 1.00f);  // Activated Purple Tab
        style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.05f, 0.02f, 0.06f, 0.97f); // Unfocused Dark Purple Tab
        style->Colors[ImGuiCol_TabUnfocusedActive] =
            ImVec4(0.10f, 0.04f, 0.12f, 1.00f); // Unfocused Active Dark Purple Tab

        // Theme Attributes (Sharp corners, minimal padding, thin borders)
        style->WindowRounding = 2.0f;      // Slightly rounded corners
        style->WindowPadding = ImVec2(6, 6); // Slightly reduced padding
        style->WindowBorderSize = 1.0f;
        style->WindowMinSize = ImVec2(40, 40);
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f);
        style->ChildRounding = 2.0f;
        style->ChildBorderSize = 1.0f;
        style->PopupRounding = 2.0f;
        style->PopupBorderSize = 1.0f;
        style->FramePadding = ImVec2(4, 3);
        style->FrameRounding = 0.0f; // Sharp frame corners
        style->FrameBorderSize = 1.0f; // Thin frame border
        style->ItemSpacing = ImVec2(6, 3); // Reduced item spacing
        style->ItemInnerSpacing = ImVec2(3, 3);
        style->CellPadding = ImVec2(4, 2);
        style->TouchExtraPadding = ImVec2(0, 0);
        style->IndentSpacing = 15.0f; // Reduced indent spacing
        style->ColumnsMinSpacing = 6.0f;
        style->ScrollbarSize = 12.0f; // Thinner scrollbar
        style->ScrollbarRounding = 2.0f; // Slightly rounded scrollbar
        style->GrabRounding = 2.0f;      // Slightly rounded grab
        style->GrabMinSize = 8.0f;
        style->LogSliderDeadzone = 4.0f;
        style->TabRounding = 2.0f; // Slightly rounded tabs
        style->TabBorderSize = 1.0f;
        style->TabCloseButtonMinWidthSelected = 0.0f;
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f);
        style->DisplayWindowPadding = ImVec2(10, 10);
        style->DisplaySafeAreaPadding = ImVec2(3, 3);
        style->MouseCursorScale = 1.0f;
        style->AntiAliasedLines = true;
        style->AntiAliasedLinesUseTex = true;
        style->AntiAliasedFill = true;
        style->CurveTessellationTol = 1.25f;
        style->CircleTessellationMaxError = 1.60f;
        style->Alpha = 1.0f;
        style->DisabledAlpha = 0.5f; // Slightly more muted disabled items
        style->WindowMenuButtonPosition = ImGuiDir_Left;
        style->ColorButtonPosition = ImGuiDir_Right;
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    }

    void ApplyCrimsonDarkStyle() {
        ImGuiStyle* style = &ImGui::GetStyle();

        // Crimson Dark Colors
        style->Colors[ImGuiCol_Text]                   = ImVec4(0.95f, 0.90f, 0.90f, 1.00f); // Off-white with a hint of red
        style->Colors[ImGuiCol_TextDisabled]           = ImVec4(0.50f, 0.45f, 0.45f, 1.00f); // Desaturated
        style->Colors[ImGuiCol_WindowBg]               = ImVec4(0.10f, 0.02f, 0.02f, 0.96f); // Very dark red
        style->Colors[ImGuiCol_ChildBg]                = ImVec4(0.05f, 0.01f, 0.01f, 0.00f); // More transparency
        style->Colors[ImGuiCol_PopupBg]                = ImVec4(0.15f, 0.03f, 0.03f, 0.94f); // Slightly lighter dark red
        style->Colors[ImGuiCol_Border]                 = ImVec4(0.50f, 0.10f, 0.10f, 0.60f); // Crimson border
        style->Colors[ImGuiCol_BorderShadow]           = ImVec4(0.20f, 0.05f, 0.05f, 0.50f); // Darker shadow
        style->Colors[ImGuiCol_FrameBg]                = ImVec4(0.30f, 0.05f, 0.05f, 0.60f); // Dark crimson frame
        style->Colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.50f, 0.10f, 0.10f, 0.70f); // Brighter crimson hover
        style->Colors[ImGuiCol_FrameBgActive]          = ImVec4(0.70f, 0.15f, 0.15f, 0.80f); // Active crimson
        style->Colors[ImGuiCol_TitleBg]                = ImVec4(0.05f, 0.01f, 0.01f, 1.00f); // Darkest title bar
        style->Colors[ImGuiCol_TitleBgActive]          = ImVec4(0.20f, 0.04f, 0.04f, 1.00f); // Active dark red title
        style->Colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.00f, 0.00f, 0.00f, 0.60f); // Collapsed dark
        style->Colors[ImGuiCol_MenuBarBg]              = ImVec4(0.10f, 0.02f, 0.02f, 1.00f); // Dark menu bar
        style->Colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.05f, 0.01f, 0.01f, 0.60f); // Dark scrollbar background
        style->Colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.30f, 0.05f, 0.05f, 1.00f); // Dark crimson grab
        style->Colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.50f, 0.10f, 0.10f, 1.00f); // Brighter crimson grab hover
        style->Colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.70f, 0.15f, 0.15f, 1.00f); // Active crimson grab
        style->Colors[ImGuiCol_CheckMark]              = ImVec4(0.90f, 0.20f, 0.20f, 1.00f); // Vibrant crimson checkmark
        style->Colors[ImGuiCol_SliderGrab]             = ImVec4(0.80f, 0.18f, 0.18f, 1.00f); // Crimson slider grab
        style->Colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.95f, 0.25f, 0.25f, 1.00f); // Active vibrant crimson
        style->Colors[ImGuiCol_Button]                 = ImVec4(0.60f, 0.10f, 0.10f, 0.50f); // Crimson button with transparency
        style->Colors[ImGuiCol_ButtonHovered]          = ImVec4(0.90f, 0.20f, 0.20f, 1.00f); // Vibrant crimson hover
        style->Colors[ImGuiCol_ButtonActive]           = ImVec4(0.75f, 0.15f, 0.15f, 1.00f); // Active crimson button
        style->Colors[ImGuiCol_Header]                 = ImVec4(0.40f, 0.08f, 0.08f, 0.40f); // Dark crimson header
        style->Colors[ImGuiCol_HeaderHovered]          = ImVec4(0.60f, 0.12f, 0.12f, 0.80f); // Hovered dark crimson header
        style->Colors[ImGuiCol_HeaderActive]           = ImVec4(0.80f, 0.16f, 0.16f, 1.00f); // Active crimson header
        style->Colors[ImGuiCol_Separator]              = style->Colors[ImGuiCol_Border]; // Same as border
        style->Colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.60f, 0.10f, 0.10f, 0.80f); // Hovered crimson separator
        style->Colors[ImGuiCol_SeparatorActive]        = ImVec4(0.80f, 0.15f, 0.15f, 1.00f); // Active crimson separator
        style->Colors[ImGuiCol_ResizeGrip]             = ImVec4(0.50f, 0.10f, 0.10f, 0.30f); // Crimson resize grip
        style->Colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.70f, 0.15f, 0.15f, 0.70f); // Hovered crimson resize grip
        style->Colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.90f, 0.20f, 0.20f, 1.00f); // Active vibrant crimson resize grip
        style->Colors[ImGuiCol_PlotLines]              = ImVec4(0.90f, 0.90f, 0.90f, 1.00f); // Light grey lines
        style->Colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.30f, 0.30f, 1.00f); // Brighter red on hover
        style->Colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.40f, 0.00f, 1.00f); // Orange histogram
        style->Colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.50f, 0.00f, 1.00f); // Brighter orange on hover
        style->Colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.90f, 0.20f, 0.20f, 0.40f); // Vibrant crimson selected text background
        style->Colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 0.50f, 0.00f, 0.90f); // Orange drag/drop target
        style->Colors[ImGuiCol_NavHighlight]           = ImVec4(0.90f, 0.20f, 0.20f, 1.00f); // Vibrant crimson nav highlight
        style->Colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f); // White windowing highlight
        style->Colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.10f, 0.02f, 0.02f, 0.30f); // Dark red dim background
        style->Colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.10f, 0.02f, 0.02f, 0.40f); // Dark red modal dim background
        style->Colors[ImGuiCol_DockingPreview]         = ImVec4(0.90f, 0.20f, 0.20f, 0.70f); // Vibrant crimson docking preview
        style->Colors[ImGuiCol_DockingEmptyBg]         = ImVec4(0.20f, 0.04f, 0.04f, 1.00f); // Dark red empty docking background
        style->Colors[ImGuiCol_Tab]                    = ImVec4(0.10f, 0.02f, 0.02f, 0.90f); // Dark red tab
        style->Colors[ImGuiCol_TabHovered]             = ImVec4(0.40f, 0.08f, 0.08f, 0.85f); // Hovered dark crimson tab
        style->Colors[ImGuiCol_TabActive]              = ImVec4(0.60f, 0.12f, 0.12f, 1.00f); // Active crimson tab
        style->Colors[ImGuiCol_TabUnfocused]           = ImVec4(0.05f, 0.01f, 0.01f, 0.95f); // Unfocused darkest red tab
        style->Colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.30f, 0.05f, 0.05f, 1.00f); // Unfocused active dark crimson tab

        // Theme Attributes (Tweaked for a sharper/darker feel)
        style->WindowRounding = 2.0f; // Slightly rounded windows
        style->WindowPadding = ImVec2(10, 10); // Increased padding
        style->WindowBorderSize = 1.0f;
        style->WindowMinSize = ImVec2(40, 40);
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f);
        style->ChildRounding = 2.0f; // Slightly rounded children
        style->ChildBorderSize = 1.0f;
        style->PopupRounding = 2.0f; // Slightly rounded popups
        style->PopupBorderSize = 1.0f;
        style->FramePadding = ImVec2(6, 4); // Increased frame padding
        style->FrameRounding = 2.0f; // Slightly rounded frames
        style->FrameBorderSize = 0.0f;
        style->ItemSpacing = ImVec2(8, 6); // Increased item spacing
        style->ItemInnerSpacing = ImVec2(6, 6); // Increased inner spacing
        style->CellPadding = ImVec2(6, 4); // Increased cell padding
        style->TouchExtraPadding = ImVec2(0, 0);
        style->IndentSpacing = 25.0f; // Increased indent spacing
        style->ColumnsMinSpacing = 8.0f; // Increased column spacing
        style->ScrollbarSize = 12.0f; // Slightly smaller scrollbar
        style->ScrollbarRounding = 7.0f; // More rounded scrollbar
        style->GrabRounding = 2.0f; // Slightly rounded grab
        style->GrabMinSize = 8.0f; // Larger grab min size
        style->LogSliderDeadzone = 4.0f;
        style->TabRounding = 4.0f;
        style->TabBorderSize = 0.0f; // No tab border
        style->TabCloseButtonMinWidthSelected = 0.0f;
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f);
        style->DisplayWindowPadding = ImVec2(19, 19);
        style->DisplaySafeAreaPadding = ImVec2(3, 3);
        style->MouseCursorScale = 1.0f;
        style->AntiAliasedLines = true;
        style->AntiAliasedLinesUseTex = true;
        style->AntiAliasedFill = true;
        style->CurveTessellationTol = 1.25f;
        style->CircleTessellationMaxError = 1.60f;
        style->Alpha = 1.0f;
        style->DisabledAlpha = 0.5f; // Slightly more transparency for disabled items
        style->WindowMenuButtonPosition = ImGuiDir_Left;
        style->ColorButtonPosition = ImGuiDir_Right;
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    }

    void ApplyCobaltDarkStyle() {
        ImGuiStyle* style = &ImGui::GetStyle();

        // Cobalt Dark Colors
        style->Colors[ImGuiCol_Text] = ImVec4(0.92f, 0.93f, 0.94f, 1.00f); // Lighter text
        style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
        style->Colors[ImGuiCol_WindowBg] = ImVec4(0.12f, 0.14f, 0.19f, 0.94f); // Deep blue-grey background
        style->Colors[ImGuiCol_ChildBg] = ImVec4(0.08f, 0.09f, 0.13f, 0.00f); // Slightly darker child
        style->Colors[ImGuiCol_PopupBg] = ImVec4(0.09f, 0.11f, 0.16f, 0.94f); // Darker popup
        style->Colors[ImGuiCol_Border] = ImVec4(0.30f, 0.35f, 0.45f, 0.50f); // Blue-grey border
        style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.05f, 0.06f, 0.08f, 0.50f);
        style->Colors[ImGuiCol_FrameBg] = ImVec4(0.18f, 0.22f, 0.29f, 0.54f); // Frame with blue tint
        style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.25f, 0.30f, 0.40f, 0.40f); // Hovered frame
        style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.30f, 0.35f, 0.45f, 0.67f); // Active frame
        style->Colors[ImGuiCol_TitleBg] = ImVec4(0.08f, 0.09f, 0.13f, 1.00f); // Darker title bar
        style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.15f, 0.18f, 0.25f, 1.00f); // Active title bar
        style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.04f, 0.05f, 0.07f, 0.51f); // Collapsed title bar
        style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.10f, 0.12f, 0.17f, 1.00f); // Dark menu bar
        style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.05f, 0.06f, 0.08f, 0.53f); // Dark scrollbar background
        style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.35f, 0.40f, 0.50f, 1.00f); // Blue-grey scrollbar grab
        style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.45f, 0.50f, 0.60f, 1.00f); // Hovered scrollbar grab
        style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.55f, 0.60f, 0.70f, 1.00f); // Active scrollbar grab
        style->Colors[ImGuiCol_CheckMark] = ImVec4(0.20f, 0.60f, 0.80f, 1.00f); // Cyan checkmark
        style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.20f, 0.60f, 0.80f, 1.00f); // Cyan slider grab
        style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.25f, 0.65f, 0.85f, 1.00f); // Active slider grab
        style->Colors[ImGuiCol_Button] = ImVec4(0.20f, 0.60f, 0.80f, 0.40f); // Cyan button
        style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.20f, 0.60f, 0.80f, 1.00f); // Hovered cyan button
        style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.15f, 0.55f, 0.75f, 1.00f); // Active cyan button
        style->Colors[ImGuiCol_Header] = ImVec4(0.20f, 0.60f, 0.80f, 0.31f); // Cyan header
        style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.20f, 0.60f, 0.80f, 0.80f); // Hovered cyan header
        style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.20f, 0.60f, 0.80f, 1.00f); // Active cyan header
        style->Colors[ImGuiCol_Separator] = style->Colors[ImGuiCol_Border];
        style->Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.15f, 0.45f, 0.65f, 0.78f); // Blue-tinted separator
        style->Colors[ImGuiCol_SeparatorActive] = ImVec4(0.15f, 0.45f, 0.65f, 1.00f); // Active blue-tinted separator
        style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.20f, 0.60f, 0.80f, 0.25f); // Cyan resize grip
        style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.20f, 0.60f, 0.80f, 0.67f); // Hovered cyan resize grip
        style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.20f, 0.60f, 0.80f, 0.95f); // Active cyan resize grip
        style->Colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
        style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
        style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
        style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.20f, 0.60f, 0.80f, 0.35f); // Cyan text selection
        style->Colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
        style->Colors[ImGuiCol_NavHighlight] = ImVec4(0.20f, 0.60f, 0.80f, 1.00f); // Cyan navigation highlight
        style->Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
        style->Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
        style->Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
        style->Colors[ImGuiCol_DockingPreview] = ImVec4(0.20f, 0.60f, 0.80f, 0.70f); // Cyan docking preview
        style->Colors[ImGuiCol_DockingEmptyBg] = ImVec4(0.10f, 0.12f, 0.17f, 1.00f); // Dark docking background
        style->Colors[ImGuiCol_Tab] = ImVec4(0.10f, 0.12f, 0.17f, 0.86f); // Dark tab
        style->Colors[ImGuiCol_TabHovered] = ImVec4(0.20f, 0.60f, 0.80f, 0.80f); // Hovered cyan tab
        style->Colors[ImGuiCol_TabActive] = ImVec4(0.15f, 0.45f, 0.65f, 1.00f); // Active blue-tinted tab
        style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.06f, 0.07f, 0.10f, 0.97f); // Unfocused dark tab
        style->Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.12f, 0.15f, 0.20f, 1.00f); // Unfocused active dark tab

        // Theme Attributes
        style->WindowRounding = 4.0f; // Slightly rounded windows
        style->WindowPadding = ImVec2(10, 10); // More padding
        style->WindowBorderSize = 1.0f;
        style->WindowMinSize = ImVec2(32, 32);
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f);
        style->ChildRounding = 4.0f; // Rounded children
        style->ChildBorderSize = 1.0f;
        style->PopupRounding = 4.0f; // Rounded popups
        style->PopupBorderSize = 1.0f;
        style->FramePadding = ImVec2(6, 4); // More frame padding
        style->FrameRounding = 4.0f; // Rounded frames
        style->FrameBorderSize = 0.0f;
        style->ItemSpacing = ImVec2(8, 6); // More item spacing
        style->ItemInnerSpacing = ImVec2(6, 6); // More inner item spacing
        style->CellPadding = ImVec2(6, 4); // More cell padding
        style->TouchExtraPadding = ImVec2(0, 0);
        style->IndentSpacing = 21.0f;
        style->ColumnsMinSpacing = 6.0f;
        style->ScrollbarSize = 14.0f;
        style->ScrollbarRounding = 9.0f;
        style->GrabRounding = 4.0f; // Rounded grabs
        style->GrabMinSize = 6.0f;
        style->LogSliderDeadzone = 4.0f;
        style->TabRounding = 4.0f;
        style->TabBorderSize = 0.0f; // No tab border
        style->TabCloseButtonMinWidthSelected = 0.0f;
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f);
        style->DisplayWindowPadding = ImVec2(19, 19);
        style->DisplaySafeAreaPadding = ImVec2(3, 3);
        style->MouseCursorScale = 1.0f;
        style->AntiAliasedLines = true;
        style->AntiAliasedLinesUseTex = true;
        style->AntiAliasedFill = true;
        style->CurveTessellationTol = 1.25f;
        style->CircleTessellationMaxError = 1.60f;
        style->Alpha = 1.0f;
        style->DisabledAlpha = 0.6f;
        style->WindowMenuButtonPosition = ImGuiDir_Left;
        style->ColorButtonPosition = ImGuiDir_Right;
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f);
    }

    void ApplyVSCodeDarkStyle() {
        ImGuiStyle* style = &ImGui::GetStyle();

        // Colors based on VSCode Dark+ theme
        style->Colors[ImGuiCol_Text]                   = ImVec4(0.85f, 0.85f, 0.85f, 1.00f); // Editor Foreground
        style->Colors[ImGuiCol_TextDisabled]           = ImVec4(0.50f, 0.50f, 0.50f, 1.00f); // Defaults
        style->Colors[ImGuiCol_WindowBg]               = ImVec4(0.15f, 0.15f, 0.15f, 0.94f); // Editor Background (slightly darker)
        style->Colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); // Defaults
        style->Colors[ImGuiCol_PopupBg]                = ImVec4(0.10f, 0.10f, 0.10f, 0.94f); // Suggest Widget Background
        style->Colors[ImGuiCol_Border]                 = ImVec4(0.30f, 0.30f, 0.30f, 0.50f); // Panel Border
        style->Colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f); // No shadow
        style->Colors[ImGuiCol_FrameBg]                = ImVec4(0.20f, 0.20f, 0.20f, 0.54f); // Input box background
        style->Colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.25f, 0.25f, 0.25f, 0.40f); // Input box background hovered
        style->Colors[ImGuiCol_FrameBgActive]          = ImVec4(0.30f, 0.30f, 0.30f, 0.67f); // Input box background active
        style->Colors[ImGuiCol_TitleBg]                = ImVec4(0.08f, 0.08f, 0.08f, 1.00f); // Title bar background (inactive)
        style->Colors[ImGuiCol_TitleBgActive]          = ImVec4(0.12f, 0.12f, 0.12f, 1.00f); // Title bar background (active)
        style->Colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.00f, 0.00f, 0.00f, 0.51f); // Defaults
        style->Colors[ImGuiCol_MenuBarBg]              = ImVec4(0.10f, 0.10f, 0.10f, 1.00f); // Menu bar background
        style->Colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.05f, 0.05f, 0.05f, 0.53f); // Scrollbar background
        style->Colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.35f, 0.35f, 0.35f, 1.00f); // Scrollbar grab
        style->Colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.45f, 0.45f, 0.45f, 1.00f); // Scrollbar grab hovered
        style->Colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.55f, 0.55f, 0.55f, 1.00f); // Scrollbar grab active
        style->Colors[ImGuiCol_CheckMark]              = ImVec4(0.00f, 0.50f, 0.75f, 1.00f); // VSCode blue
        style->Colors[ImGuiCol_SliderGrab]             = ImVec4(0.00f, 0.45f, 0.70f, 1.00f); // VSCode blue darker
        style->Colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.00f, 0.55f, 0.80f, 1.00f); // VSCode blue lighter
        style->Colors[ImGuiCol_Button]                 = ImVec4(0.00f, 0.50f, 0.75f, 0.40f); // Button background (slightly transparent blue)
        style->Colors[ImGuiCol_ButtonHovered]          = ImVec4(0.00f, 0.50f, 0.75f, 1.00f); // Button hovered (blue)
        style->Colors[ImGuiCol_ButtonActive]           = ImVec4(0.00f, 0.60f, 0.90f, 1.00f); // Button active (lighter blue)
        style->Colors[ImGuiCol_Header]                 = ImVec4(0.25f, 0.25f, 0.25f, 0.31f); // Tree node/header background
        style->Colors[ImGuiCol_HeaderHovered]          = ImVec4(0.30f, 0.30f, 0.30f, 0.80f); // Tree node/header hovered
        style->Colors[ImGuiCol_HeaderActive]           = ImVec4(0.35f, 0.35f, 0.35f, 1.00f); // Tree node/header active
        style->Colors[ImGuiCol_Separator]              = style->Colors[ImGuiCol_Border]; // Defaults
        style->Colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.15f, 0.50f, 0.80f, 0.78f); // Separator hovered (blueish)
        style->Colors[ImGuiCol_SeparatorActive]        = ImVec4(0.15f, 0.50f, 0.80f, 1.00f); // Separator active (blueish)
        style->Colors[ImGuiCol_ResizeGrip]             = ImVec4(0.30f, 0.30f, 0.30f, 0.25f); // Resize grip
        style->Colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.40f, 0.40f, 0.40f, 0.67f); // Resize grip hovered
        style->Colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.50f, 0.50f, 0.50f, 0.95f); // Resize grip active
        style->Colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f); // Defaults
        style->Colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f); // Defaults
        style->Colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f); // Defaults
        style->Colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f); // Defaults
        style->Colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.00f, 0.50f, 0.75f, 0.35f); // Text selection background (blueish)
        style->Colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f); // Defaults
        style->Colors[ImGuiCol_NavHighlight]           = ImVec4(0.00f, 0.50f, 0.75f, 1.00f); // Navigation highlight (blue)
        style->Colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f); // Defaults
        style->Colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f); // Defaults
        style->Colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f); // Defaults
        style->Colors[ImGuiCol_DockingPreview]         = ImVec4(0.00f, 0.50f, 0.75f, 0.70f); // Docking preview (blue)
        style->Colors[ImGuiCol_DockingEmptyBg]         = ImVec4(0.20f, 0.20f, 0.20f, 1.00f); // Defaults
        style->Colors[ImGuiCol_Tab]                    = ImVec4(0.10f, 0.10f, 0.10f, 0.86f); // Tab background (inactive)
        style->Colors[ImGuiCol_TabHovered]             = ImVec4(0.20f, 0.20f, 0.20f, 0.80f); // Tab hovered
        style->Colors[ImGuiCol_TabActive]              = ImVec4(0.25f, 0.25f, 0.25f, 1.00f); // Tab active
        style->Colors[ImGuiCol_TabUnfocused]           = ImVec4(0.07f, 0.07f, 0.07f, 0.97f); // Tab unfocused
        style->Colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.15f, 0.15f, 0.15f, 1.00f); // Tab unfocused active

        // Theme Attributes
        style->WindowRounding = 0.0f; // No rounding
        style->WindowPadding = ImVec2(8, 8); // Default padding
        style->WindowBorderSize = 1.0f; // Defaults
        style->WindowMinSize = ImVec2(32, 32); // Defaults
        style->WindowTitleAlign = ImVec2(0.0f, 0.5f); // Defaults
        style->ChildRounding = 0.0f; // No rounding
        style->ChildBorderSize = 1.0f; // Defaults
        style->PopupRounding = 0.0f; // No rounding
        style->PopupBorderSize = 1.0f; // Defaults
        style->FramePadding = ImVec2(4, 3); // Default padding
        style->FrameRounding = 0.0f; // No rounding for frames
        style->FrameBorderSize = 0.0f; // No frame border
        style->ItemSpacing = ImVec2(8, 4); // Default spacing
        style->ItemInnerSpacing = ImVec2(4, 4); // Default inner spacing
        style->CellPadding = ImVec2(4, 2); // Defaults
        style->TouchExtraPadding = ImVec2(0, 0); // Defaults
        style->IndentSpacing = 21.0f; // Defaults
        style->ColumnsMinSpacing = 6.0f; // Defaults
        style->ScrollbarSize = 14.0f; // Defaults
        style->ScrollbarRounding = 9.0f; // Defaults
        style->GrabRounding = 0.0f; // No rounding for grab
        style->GrabMinSize = 6.0f; // Defaults
        style->LogSliderDeadzone = 4.0f; // Defaults
        style->TabRounding = 0.0f; // No tab rounding
        style->TabBorderSize = 0.0f; // No tab border
        style->TabCloseButtonMinWidthSelected = 0.0f; // Defaults
        style->ButtonTextAlign = ImVec2(0.5f, 0.5f); // Defaults
        style->SelectableTextAlign = ImVec2(0.0f, 0.0f); // Defaults
        style->DisplayWindowPadding = ImVec2(19, 19); // Defaults
        style->DisplaySafeAreaPadding = ImVec2(3, 3); // Defaults
        style->MouseCursorScale = 1.0f; // Defaults
        style->AntiAliasedLines = true; // Defaults
        style->AntiAliasedLinesUseTex = true; // Defaults
        style->AntiAliasedFill = true; // Defaults
        style->CurveTessellationTol = 1.25f; // Defaults
        style->CircleTessellationMaxError = 1.60f; // Defaults
        style->Alpha = 1.0f; // Fully opaque
        style->DisabledAlpha = 0.6f; // Defaults
        style->WindowMenuButtonPosition = ImGuiDir_Left; // Defaults
        style->ColorButtonPosition = ImGuiDir_Right; // Defaults
        style->SeparatorTextAlign = ImVec2(0.0f, 0.5f); // Defaults
    }


    void runStyle(const char* styleName) {
        if (strcmp(styleName, "Dark") == 0) {
            ApplyDarkStyle();
        } else if (strcmp(styleName, "Light") == 0) {
            ApplyLightStyle();
        } else if (strcmp(styleName, "Classic") == 0) {
            ApplyClassicStyle();
        } else if (strcmp(styleName, "DarkGrayScale") == 0) {
            ApplyDarkGrayScale();
        } else if (strcmp(styleName, "CRTRetro") == 0) {
            ApplyCRTRetroStyle();
        } else if (strcmp(styleName, "Cyberpunk") == 0) {
            ApplyCyberpunkStyle();
        } else if (strcmp(styleName, "CrimsonDark") == 0) {
            ApplyCrimsonDarkStyle();
        } else if (strcmp(styleName, "CobaltDark") == 0) {
            ApplyCobaltDarkStyle();
        } else if (strcmp(styleName, "VSCode") == 0) {
            ApplyVSCodeDarkStyle();
        }

        // Add more else if blocks for other custom styles
        else {
            // Default to Dark style if the name is not recognized
            ApplyDarkStyle();
        }
    }
}

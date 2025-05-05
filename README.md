# EasyImGui

EasyImGui is designed to simplify the process of creating desktop applications with the popular Dear ImGui library. It aims to eliminate the common boilerplate code associated with setting up ImGui, allowing developers **like you** to focus directly on building their graphical user interface. With EasyImGui, you can quickly go from writing your UI code to having a functional desktop application without the need for complex project configurations or relying on specific IDEs like Visual Studio.

## Features

*   **Simplified Setup:** Get started quickly without dealing with extensive ImGui backend and windowing boilerplate.
*   **No Visual Studio Required:** Compile and run your projects without needing Visual Studio installed unlike many other ImGui projects.
*   **Transparent Window Support:** Easily enable/toggle **a transparent window background**, allowing you to create applications where only the ImGui elements are visible.
*   **Effortless Font and Theme Swapping:** Change the look and feel of your application by simply modifying a string to switch between pre-configured fonts and themes.
*   **Easy Customization:** Add your own custom fonts and themes with minimal effort by modifying dedicated configuration files.
*   **DX9 and Win32 Backends:** Currently supports DirectX 9 and Win32 backends for rendering and window management.
*   **Planned Future Backends:** Future plans include adding support for more widely used backends like OpenGL3 and Vulkan with GLFW or/and SDL3.

## Getting Started

### Prerequisites

*   A C++ compiler (e.g., MinGW, GCC, Clang)
*   CMake

### Building the Project

1.  Clone the repository:
    ```bash
    git clone https://github.com/Plinkon/EasyImGui
    cd EasyImGui
    ```
2.  Navigate to the compile directory:
    ```bash
    cd compile/windows
    ```
3.  Run the desired compile script:
    *   For a debug build:
        ```bash
        CompileDebug.bat
        ```
    *   For a release build:
        ```bash
        CompileRelease.bat
        ```

This will generate the executable in the `build` directory.

## Project Structure

```
├── assets/
│   └── fonts/           # Fonts that are used in this project
│       └── HELP.md      # Help file for adding your own fonts 
├── compile/
│   ├── cmake/           # CMake build script
│   └── windows/         # Windows specific compile scripts
|       └── build/       # Compiled executables
├── include/
│   ├── easyimgui/       # EasyImGui specific headers
│   │   ├── fonts.h      # Font hex data
│   │   ├── globals.h    # Global project configuration and variables
│   │   ├── style.h      # Style/Theme code
│   │   └── ui.hpp       # Your ImGui UI code goes here in the runUI() function
│   └── imgui/           # Dear ImGui source files
│       └── imgui_impl/  # ImGui backend implementations
├── src/
│   └── main.cpp         # Main application entry point (usually no modification needed for basic apps)
├── Makefile             # Alternative build system (optional)
└── README.md            # This file
```


## Customization

### Writing Your UI Code

All your ImGui drawing code should go into the `include/easyimgui/ui.hpp` file. You can add your windows, widgets, and other ImGui elements within the appropriate function calls provided in this file.

### Global Window/ImGui Configuration

The `include/easyimgui/globals.h` file contains global configuration options for the project. You can adjust settings like window size, title, and enable features like the transparent background here. You can also add your own global variables that you need access to throughout your UI code.

### Adding Custom Fonts

To add a custom font:

1.  Obtain your font's **hex data** as a c arrray. Tutorial in the `assets/fonts/HELP.md` file
2.  Edit the `include/easyimgui/fonts.h` file and add the array along with a `[fontName]Size = [fontNameArraySize]`.
3.  Edit the Load Custom Fonts section in `main.cpp` and follow the format of the other fonts.
4.  You can then easily switch to your new font in the `globals.h` file. (make sure the name in the `globals.h` file is the same as in `main.cpp`)

### Adding Custom Themes (Styles)

To add a custom theme:

1.  Edit the `include/easyimgui/style.h` file.
2.  Follow the existing pattern to define a new ImGui style.
3.  Add your style to the `runStyle()` function at the bottom of `style.h` and follow the format of the other styles.
4.  You can then easily switch to your new theme in the `globals.h` file. (same naming scheme as the fonts but make sure it is the same as in `fonts.h`)

## Contributing

We welcome contributions to EasyImGui! If you have ideas for new features, improvements, fonts, or bug fixes, please feel free to open an issue or submit a pull request/issue.

## License

This project is licensed under the GPLv3 license.

## Acknowledgements

*   [Dear ImGui](https://github.com/ocornut/imgui) - The fantastic immediate mode GUI library that powers this project.

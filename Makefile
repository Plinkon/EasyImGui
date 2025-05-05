# Makefile

# Compiler
CXX = g++

# Standard
CXXSTD = c++17

# Output directory for executables
BUILD_DIR = build

# Include directories
INCLUDE_DIRS = -Iinclude -Iinclude/imgui

# Common source files
IMGUI_SRC_DIR = include/imgui
IMGUI_IMPL_SRC_DIR = include/imgui/imgui_impl

IMGUI_SOURCES = \
    $(IMGUI_SRC_DIR)/imgui.cpp \
    $(IMGUI_SRC_DIR)/imgui_draw.cpp \
    $(IMGUI_SRC_DIR)/imgui_tables.cpp \
    $(IMGUI_SRC_DIR)/imgui_widgets.cpp \
    $(IMGUI_SRC_DIR)/imgui_demo.cpp \
    $(IMGUI_IMPL_SRC_DIR)/imgui_impl_win32.cpp \
    $(IMGUI_IMPL_SRC_DIR)/imgui_impl_dx9.cpp

APP_SOURCES = src/main.cpp

# Libraries
LIBS = -ld3d9 -lgdi32 -ldwmapi

# Target executable names
DEBUG_TARGET = $(BUILD_DIR)/main_debug
RELEASE_TARGET = $(BUILD_DIR)/main_release

# Object files directory (optional, keeps build directory cleaner)
OBJ_DIR = $(BUILD_DIR)/obj

# Automatically generate object file names from source files
# This is a common pattern in Makefiles
IMGUI_OBJECTS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(notdir $(IMGUI_SOURCES)))
APP_OBJECTS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(notdir $(APP_SOURCES)))

# Combine all objects
OBJECTS = $(IMGUI_OBJECTS) $(APP_OBJECTS)

# Default target: build release
all: release

# Phony targets are not actual files
.PHONY: all debug release clean mkdir_build mkdir_obj

# Debug build
debug: mkdir_build mkdir_obj $(DEBUG_TARGET)

$(DEBUG_TARGET): $(OBJECTS)
	@echo "Linking debug executable..."
	$(CXX) $(CXXSTD) $(OBJECTS) $(LIBS) -o $@ -D_DEBUG -g -O0

# Release build
release: mkdir_build mkdir_obj $(RELEASE_TARGET)

$(RELEASE_TARGET): $(OBJECTS)
	@echo "Linking release executable..."
	$(CXX) $(CXXSTD) $(OBJECTS) $(LIBS) -o $@ -DNDEBUG -O3

# Rule to compile .cpp files into .o files
# Uses pattern matching
$(OBJ_DIR)/%.o: $(IMGUI_SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CXX) $(CXXSTD) $(INCLUDE_DIRS) -c $< -o $@ -D_DEBUG -g -O0 # Debug flags for compilation

$(OBJ_DIR)/%.o: $(IMGUI_IMPL_SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CXX) $(CXXSTD) $(INCLUDE_DIRS) -c $< -o $@ -D_DEBUG -g -O0 # Debug flags for compilation

$(OBJ_DIR)/%.o: src/%.cpp | $(OBJ_DIR)
	@echo "Compiling $< to $@"
	$(CXX) $(CXXSTD) $(INCLUDE_DIRS) -c $< -o $@ -D_DEBUG -g -O0 # Debug flags for compilation

# Directory creation
mkdir_build:
	@mkdir -p $(BUILD_DIR)

mkdir_obj:
	@mkdir -p $(OBJ_DIR)

# Clean up build files
clean:
	@echo "Cleaning build directory..."
	@rm -rf $(BUILD_DIR)

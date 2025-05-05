# How to get your font's hex data as a c array and add into EasyImGui:
### Prerequisites: 
* Have HxD installed [Link to download page](https://mh-nexus.de/en/downloads.php?product=HxD20)
* Have basic C++ knowledge (idk why you are using this if you don't, go learn c++ first)
* Thats it!

### Now moving on!

1. Open HxD
2. Click the `File` menu bar button in the top left corner
3. Click `Open...`
4. Now navigate to and select your chosen font `.ttf` file
5. Click the `File` menu bar button again
6. Go to `Export`
7. Then click `C` as an export option
8. Remember where it is going to be saved, and then save it.
9. Open the new saved file (should be named `(fontName).c` by default)
10. Delete the comments and empty lines at the top of the file above the `unsigned char (fontName)[...] = {...}`
11. Add an unsigned int above the `unsigned char (fontName)[...] = {...}` following the format of: `unsigned int (fontName)Size = (#'s in square brackets in array variable)`


    Example / How it should look (using roboto as example name):
    ``` cpp
    unsigned int RobotoSize = 168260; // Same number as below `Roboto[***168260***]`
    unsigned char Roboto[168260] = {all of the hex data here};
    ```

12. Now, copy everything in that file (the size and array variables)
13. Go to the `fonts.h` file
14. Paste in the variables below where it says `// Add your own fonts below`

### Good job! You finished the first half!

1. Now, go into `src/main.cpp` at aroud line 100
2. Copy the format code below (or just uncomment in main.cpp)
    ```
    if (strcmp(CONFIG::customFontName, "fontName") == 0) io.Fonts->AddFontFromMemoryTTF(FONT::fontName, FONT::fontNameSize, CONFIG::customFontSize);
    ```
3. Replace all instances of `fontName` with the name of the font hex data array variable and size variable that you pasted into `fonts.h`
4. Now if you want to use that new font, go into `globals.h`
5. And set the `customFontName` variable to the same name that you have been using for your newly added font
6. Compile and you're done!
#include "colors.h"
#include <iostream>
using namespace std;

// Foreground colors
const char* BlackFG = "30";
const char* RedFG = "31";
const char* GreenFG = "32";
const char* BlueFG = "34";
const char* MagentaFG = "35";
const char* WhiteFG = "37";

// Background colors
const char* BlackBG = "40";
const char* RedBG = "41";
const char* GreenBG = "42";
const char* BlueBG = "44";
const char* MagentaBG = "45";
const char* WhiteBG = "47";

// Display text in color functions
void displayTextInColor(string text) {
    printf("\x1B[%s;%sm%s\033[0m", BlackFG, WhiteFG, text.c_str());
}

void displayTextInColor(string text, const char* BGColor, const char* FGColor) {
    printf("\x1B[%s;%sm%s\033[0m", BGColor, FGColor, text.c_str());
}

void displayTextInColor(char ch, const char* BGColor, const char* FGColor) {
    printf("\x1B[%s;%sm%c\033[0m", BGColor, FGColor, ch);
}

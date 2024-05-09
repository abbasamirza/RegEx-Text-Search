#ifndef COLORS_H
#define COLORS_H

#include <iostream>
using namespace std;

// Foreground colors
extern const char* BlackFG;
extern const char* RedFG;
extern const char* GreenFG;
extern const char* BlueFG;
extern const char* MagentaFG;
extern const char* WhiteFG;

// Background colors
extern const char* BlackBG;
extern const char* RedBG;
extern const char* GreenBG;
extern const char* BlueBG;
extern const char* MagentaBG;
extern const char* WhiteBG;

// Display text in color functions
void displayTextInColor(string);
void displayTextInColor(string, const char*, const char*);

#endif

#ifndef HELPERS_H
#define HELPERS_H

#include <iostream>
#include <regex>
using namespace std;

void getInputText(string&);
void getRegex(string&, string&);
void getInputChoice(int*);
void displayTypingEffect(string, const char*, const char*);
void applyRegularExpression(string&, regex, int*, string&);

#endif

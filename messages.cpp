#include "messages.h"
#include "colors.h"
#include <iostream>
using namespace std;

void displayExampleText() {
    system("clear");

    displayTextInColor("\t\t\tRegEx Search is a tool to learn and test Regular Expressions (RegEx / RegExp).\n\t\t\tThis program is built by Lamia and Abbas (BCS-4C), Dr. Nasir Uddin's students ☺️ .\n\n", BlackFG, BlueFG);

    // Regex cheat sheet
    displayTextInColor("\t\t\t\t\t\t\t--- REGEX CHEAT SHEET ---\n", BlackFG, RedFG);

    displayTextInColor("\t\t\t\t--- Character Classes ---\t\t\t\t--- Anchors ---\n", BlackFG, BlueFG);
    displayTextInColor("\t\t\t.", BlackFG, BlueFG);
    displayTextInColor("\t\tany character except newline", BlackFG, MagentaFG);
    displayTextInColor("\t\t^abc$", BlackFG, BlueFG);
    displayTextInColor("\tstart / end of the string\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\w \\d \\s", BlackFG, BlueFG);
    displayTextInColor("\tword, digit, whitespace", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\b \\B", BlackFG, BlueFG);
    displayTextInColor("\tword, not-word boundary\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\W \\D \\S", BlackFG, BlueFG);
    displayTextInColor("\tnot word, digit, whitespace", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t---------------\n", BlackFG, BlueFG);
    displayTextInColor("\t\t\t[abc]", BlackFG, BlueFG);
    displayTextInColor("\t\tany of a, b, or c", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t--- Groups and Lookaround ---\n", BlackFG, BlueFG);
    displayTextInColor("\t\t\t[^abc]", BlackFG, BlueFG);
    displayTextInColor("\t\tnot a, b, or c", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t(abc)", BlackFG, BlueFG);
    displayTextInColor("\tcapture group\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t[a-g]", BlackFG, BlueFG);
    displayTextInColor("\t\tcharacter between a & g", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\1", BlackFG, BlueFG);
    displayTextInColor("\tbackreference to group #1\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t-------------------------", BlackFG, BlueFG);
    displayTextInColor("\t\t\t(?:abc)", BlackFG, BlueFG);
    displayTextInColor("\tnon-capturing group\n", BlackFG, MagentaFG);

    // Escaped Characters
    displayTextInColor("\t\t\t\t--- Escaped Characters ---\t\t\t(?=abc)", BlackFG, BlueFG);
    displayTextInColor("\tpositive lookahead\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\. \\* \\\\", BlackFG, BlueFG);
    displayTextInColor("\tescaped special characters", BlackFG, MagentaFG);
    displayTextInColor("\t\t(?!abc)", BlackFG, BlueFG);
    displayTextInColor("\tnegative lookahead\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\\t \\n \\r", BlackFG, BlueFG);
    displayTextInColor("\ttab, linefeed, carriage return", BlackFG, MagentaFG);
    displayTextInColor("\t\t-----------------------------\n", BlackFG, BlueFG);
    displayTextInColor("\t\t\t\t--------------------------\n", BlackFG, BlueFG);

    // Quantifiers and Alternation
    displayTextInColor("\t\t\t\t\t\t--- Quantifiers and Alternation ---\n", BlackFG, BlueFG);
    displayTextInColor("\t\t\t\t\ta* a+ a?", BlackFG, BlueFG);
    displayTextInColor("\t\t\t0 or more, 1 or more, 0 or 1\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t\ta{5} a{2,}", BlackFG, BlueFG);
    displayTextInColor("\t\t\texactly five, two or more\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t\ta{1,3}", BlackFG, BlueFG);
    displayTextInColor("\t\t\t\tbetween one and three\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t\ta+? a{2,}?", BlackFG, BlueFG);
    displayTextInColor("\t\t\tmatch as few as possible\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t\tab|cd", BlackFG, BlueFG);
    displayTextInColor("\t\t\t\tmatch ab or cd\n", BlackFG, MagentaFG);
    displayTextInColor("\t\t\t\t\t\t-----------------------------------\n", BlackFG, BlueFG);

    cout << endl;
}

void displayMenu() {
    cout << "\t\t\t1. Change your text\n"
        << "\t\t\t2. Change regular expression\n"
        << "\t\t\t3. Exit\n\n"
        << "\t\t\tEnter the number of your choice: ";
}

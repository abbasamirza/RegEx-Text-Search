#include "colors.h"
#include "messages.h"
#include "helpers.h"
#include <iostream>
#include <regex>
#include <string>
#include <unistd.h>
using namespace std;

#define EXIT 3

int main() 
{
    string text, regEx;
    int matchCount = 0;

    displayExampleText();
    getInputText(text);
    cout << endl;
    getRegex(text, regEx);

    // Apply the regular expression to the text
    regex regexObject(regEx);
    
    system("clear");
    displayExampleText();
    applyRegularExpression(text, regexObject, &matchCount, regEx);

    int choice;
    
    do {
        matchCount = 0;
        cout << endl << endl;
        displayMenu();
        getInputChoice(&choice);

        if (choice == 1) {
            displayExampleText();
            cout << "\t\t\tOld Text: " << text << endl;
            getInputText(text);
            cout << "\t\t\t";
            displayTypingEffect("Text was updated successfully!", BlackFG, GreenFG);
            sleep(1);
            displayExampleText();
            applyRegularExpression(text, regexObject, &matchCount, regEx);
        } else if (choice == 2) {
            displayExampleText();
            cout << "\t\t\tOld Regular Expression: " << regEx << endl;
            getRegex(text, regEx);
            regexObject = regex(regEx);
            cout << "\t\t\t";
            displayTypingEffect("RegEx was updated successfully!", BlackFG, GreenFG);
            sleep(1);
            displayExampleText();
            applyRegularExpression(text, regexObject, &matchCount, regEx);
        }
    } while (choice != EXIT);

    system("clear");

    return 0;
}

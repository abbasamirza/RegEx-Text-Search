#include "helpers.h"
#include "colors.h"
#include "messages.h"
#include <iostream>
#include <regex>
#include <unistd.h>
using namespace std;

// Function to get input text and regular expression with validation
void getInputText(string& text) {
    while (true) {
        cout << "\t\t\tEnter your text to search from: ";
        fflush(stdin);
        getline(cin, text);

        // Validate the text input
        if (text.empty()) {
            displayTextInColor("\t\t\tError: Text cannot be empty. Please enter some text.\n", BlackFG, RedFG);
        } else {
            break; // Exit the loop if text is valid
        }
    }
}

void getRegex(string& text, string& regEx) {
    bool validRegex = false;

    while (!validRegex) {
        cout << "\t\t\tEnter your regular expression pattern: ";
        fflush(stdin);
        getline(cin, regEx);

        while (regEx.length() == 0) {
            displayTextInColor("\t\t\tError: RegEx cannot be empty. Please enter some RegEx.\n", BlackFG, RedFG);
            cout << "\t\t\tEnter your regular expression pattern: ";
            fflush(stdin);
            getline(cin, regEx);
        }

        // Validate the regular expression
        try {
            regex regexObject(regEx);
            validRegex = true;
        } catch (regex_error& e) {
            int choice;

            displayTextInColor("\n\t\t\tInvalid regular expression\n\n", BlackFG, RedFG);
            cout << "\t\t\t1. Re-enter the text.\n";
            cout << "\t\t\t2. Re-enter the regular expression.\n";
            cout << "\t\t\t3. Exit the program.\n\n";
            cout << "\t\t\tEnter the number of your choice: ";
            cin >> choice;

            while (choice < 1 || choice > 3) {
                displayTextInColor("\n\t\t\tInvalid choice. Please enter 1, 2, or 3.\n", BlackFG, RedFG);
                cout << "\t\t\tEnter the number of your choice: ";
                cin >> choice;
            }

            if (choice == 1) {
                // User wants to re-enter the text
                displayExampleText();
                getInputText(text);
            } else if (choice == 2) {
                displayExampleText();
            } else {
                // Exit the program
                system("clear");
                exit(1);
            }
        }
    }
}

void getInputChoice(int* choice) {
    fflush(stdin);
    cin >> *choice;

    while (*choice < 1 || *choice > 4) {
        displayTextInColor("\n\t\t\tInvalid choice. Please enter 1, 2, 3, or 4.\n", BlackFG, RedFG);
        cout << "\t\t\tEnter the number of your choice: ";
        fflush(stdin);
        cin >> *choice;
    }
}

void displayTypingEffect(string str, const char* BGColor, const char* FGColor) {
    for (int i = 0; i < str.length(); i++) {
        displayTextInColor(str[i], BGColor, FGColor);
        fflush(stdout);
        usleep(50000);
    }
}

void applyRegularExpression(string& text, regex regexObject, int* matchCount) {
    sregex_iterator wordsBegin = sregex_iterator(text.begin(), text.end(), regexObject);
    sregex_iterator wordsEnd = sregex_iterator();
    size_t pos = 0;

    cout << "\n\t\t\t";

    for (sregex_iterator i = wordsBegin; i != wordsEnd; i++) {
        smatch match = *i;
        size_t matchPos = match.position();

        // Display the characters before the match
        cout << text.substr(pos, matchPos - pos);

        // Highlight the matched characters
        string matchedText = match.str();
        *matchCount += matchedText.length();
        displayTextInColor(matchedText, BlueBG, WhiteFG);

        // Update the position
        pos = matchPos + matchedText.length();
    }

    // Display the remaining characters
    cout << text.substr(pos) << "\n\n\t\t\t" << *matchCount;

    if (*matchCount != 0) {
        displayTextInColor(" Matches\n", BlackFG, GreenFG);
    } else {
        displayTextInColor(" Matches\n", BlackFG, RedFG);
    }
}

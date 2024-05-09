#include "colors.h"
#include "messages.h"
#include <iostream>
#include <regex>
#include <string>
using namespace std;

// Function to get input text and regular expression with validation
void getInput(string& text, string& regEx) {
    while (true) {
        cout << "Enter your text to search from:\n";
        getline(cin, text);

        // Validate the text input
        if (text.empty()) {
            cout << "Error: Text cannot be empty. Please enter some text." << endl;
        } else {
            break; // Exit the loop if text is valid
        }
    }

    bool validRegex = false;
    while (!validRegex) {
        cout << "Enter your regular expression pattern:\n";
        getline(cin, regEx);

        // Validate the regular expression
        try {
            regex regexObject(regEx);
            validRegex = true;
        } catch (regex_error& e) {
            char choice;
            cout << "Invalid regular expression: " << e.what() << endl;
            cout << "1. Re-enter the text.\n";
            cout << "2. Re-enter the regular expression.\n";
            cout << "3. Exit the program.\n";
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore(); // Clear the input buffer
            switch (choice) {
                case '1':
                    // User wants to re-enter the text
                    getInput(text, regEx);
                    return;
                case '2':
                    // User wants to re-enter the regular expression
                    break;
                case '3':
                    // Exit the program
                    exit(1);
                default:
                    cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            }
        }
    }
}

int main() 
{
    string text, regEx;
    displayExampleText();

    getInput(text, regEx);

    // Apply the regular expression to the text
    regex regexObject(regEx);
    if (regex_search(text, regexObject)) {
        cout << "Regular expression matched in the text." << endl;
    } else {
        cout << "Regular expression did not match in the text." << endl;
    }

    return 0;
}

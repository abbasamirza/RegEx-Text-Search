#include "colors.h"
#include "messages.h"
#include <iostream>
#include <regex>
using namespace std;

int main() {
    printf("\n");
    printf("\x1B[31mTexting\033[0m\t\t");
    printf("\x1B[32mTexting\033[0m\t\t");
    printf("\x1B[33mTexting\033[0m\t\t");
    printf("\x1B[34mTexting\033[0m\t\t");
    printf("\x1B[35mTexting\033[0m\n");
    
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[37mTexting\033[0m\t\t");
    printf("\x1B[93mTexting\033[0m\n");
    
    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;30mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");

    printf("\033[3;47;35mTexting\033[0m\t\t");
    printf("\033[2;47;35mTexting\033[0m\t\t");
    printf("\033[1;47;35mTexting\033[0m\t\t");
    printf("\t\t");
    printf("\n");

    string subject;
    cout << "Enter the string: ";
    getline(cin, subject);

    string regexPattern;
    cout << "Enter the regex pattern: ";
    getline(cin, regexPattern);

    // regex object.
    regex re(regexPattern);

    // finding all the matches.
    for (sregex_iterator it = sregex_iterator(subject.begin(), subject.end(), re);
        it != sregex_iterator(); it++) {
        smatch match = *it;
        cout << "\nMatched string is = " << match.str(0)
            << "\nand it is found at position "
            << match.position(0) << endl;
        // Check if there's a capture group in the pattern
        if (match.size() > 1) {
            cout << "Capture " << match.str(1)
                << " at position " << match.position(1) << endl;
        }
    }

    displayExampleText();


	return 0;
}

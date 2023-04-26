#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <string>

using namespace std;

// Function to clear the console
void clearConsole() {
    cout << "\x1B[2J\x1B[H";
}

// Function to read input character without echoing it to the console
char getInput() {
    return _getch();
}

// Function to convert the input character to uppercase
char toUpper(char input) {
    return toupper(input);
}

// Function to emit an error sound
void errorBeep() {
    Beep(500, 300);
}

// Function to display "Invalid Key" for 1 second and delete it from the same line
void displayErrorMessage() {
    cout << "Invalid Key";
    Sleep(1000);
    cout << string(strlen("Invalid Key"), '\b') << string(strlen("Invalid Key"), ' ') << string(strlen("Invalid Key"), '\b');
}

// Function to handle the input
void handleInput(char input, bool& isFemale, bool& isMale) {
    if (input == 'F') {
        isFemale = true;
        cout << "You have indicated that you are female." << endl;
    }
    else if (input == 'M') {
        isMale = true;
        cout << "You have indicated that you are male." << endl;
    }
    else if (input == 'Q') {
        cout << "Exiting program..." << endl;
        exit(0);
    }
    else {
        displayErrorMessage();
        errorBeep();
    }
}

// Function to get gender input
void getGenderInput(bool& isFemale, bool& isMale) {
    char input;

    while (!isFemale && !isMale) {
        cout << "Please enter 'F' for female or 'M' for male or 'Q' to quit: ";
        do {
            input = getInput();
            input = toUpper(input);
            if (input == 'F' || input == 'M' || input == 'Q') {
                cout << input << " ->> ";
            }
            handleInput(input, isFemale, isMale);
        } while (input != 'F' && input != 'Q' && input != 'M');
    }
}

int main() {
    bool isFemale = false;
    bool isMale = false;

    clearConsole();
    getGenderInput(isFemale, isMale);
    return 0;
}

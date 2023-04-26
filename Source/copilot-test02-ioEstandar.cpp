// This program reads and writes to the standard input and output information about an person: name, gender, age, and height.

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // Variables
    string name;
    char gender;
    int age;
    float height;

    // Input
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Enter your gender (\"F\"=Female / \"M\"=Male): " << endl;
    cin >> gender;

    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "Enter your height: " << endl;
    cin >> height;

    // Output
    cout << "Hello " << name << endl;
    if (gender == 'M')
    {
        cout << "You are a Male" << endl;
    }
    else
    {
        cout << "You are a Female" << endl;
    }
    cout << "You are " << age << " years old" << endl;
    cout << "You have a height of " << height << " meters." << endl;

    return 0;
}

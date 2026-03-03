#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Integer (whole numbers)
    int age = 25;

    // 2. Double (floating-point numbers)
    double price = 19.99;

    // 3. Character (single character)
    char grade = 'A';

    // 4. Boolean (true or false)
    bool isStudent = true;

    // 5. String (text)
    string name = "John Doe";

    // Output variables to the console
    cout << "--- Variables in C++ ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: $" << price << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is a Student: " << (isStudent ? "Yes" : "No") << endl;

    // Modifying a variable
    age = 26;
    cout << "\nAfter a birthday, " << name << " is now " << age << " years old." << endl;

    return 0;
}

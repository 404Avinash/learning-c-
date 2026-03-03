#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Integer variable (int) - stores whole numbers
    int age = 25;

    // 2. Floating point variable (double) - stores decimal numbers
    double height = 5.9;

    // 3. Character variable (char) - stores a single character
    char grade = 'A';

    // 4. Boolean variable (bool) - stores true or false
    bool isStudent = true;

    // 5. String variable (string) - stores text
    string name = "Alice";

    // Outputting the variables
    cout << "--- Variables in C++ ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is a student? " << (isStudent ? "Yes" : "No") << endl;

    // Modifying variables
    age = 26;
    isStudent = false;

    cout << "\n--- After 1 year ---" << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Is a student? " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}

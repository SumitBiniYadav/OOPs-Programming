#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

	demonstrateLocalVariable() {
    // Local variable
    int localVar = 50;

    cout << "Inside demonstrateLocalVariable function:" << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;
}

	demonstrateGlobalVariable() {
    cout << "\nInside demonstrateGlobalVariable function:" << endl;
    // Accessing global variable directly
    cout << "Global Variable: " << globalVar << endl;
}

main() {
    // Local variable in main
    int mainLocalVar = 200;

    cout << "Inside main function:" << endl;
    cout << "Local Variable in main: " << mainLocalVar << endl;
    cout << "Global Variable: " << globalVar << endl;

    // Calling functions that use local and global variables
    demonstrateLocalVariable();
    demonstrateGlobalVariable();

    // Modifying global variable
    globalVar = 300;
    cout << "\nAfter modifying the global variable:" << endl;
    cout << "Global Variable (modified): " << globalVar << endl;

}


#include <iostream>
using namespace std;

main() {
    // Declare variables
    int a = 10, b = 5;
    bool result1, result2;
    int bitResult;

    
    // Arithmetic Operators
  
    cout << "Arithmetic Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "a + b = " << (a + b) << endl;  // Addition
    cout << "a - b = " << (a - b) << endl;  // Subtraction
    cout << "a * b = " << (a * b) << endl;  // Multiplication
    cout << "a / b = " << (a / b) << endl;  // Division
    cout << "a % b = " << (a % b) << endl;  // Modulus (remainder)
    cout << endl;

   
    // Relational Operators
   
    cout << "Relational Operators:" << endl;
    result1 = (a == b);  // Equal to
    result2 = (a != b);  // Not equal to

    cout << "a == b: " << result1 << endl;  // Output 0 (false) or 1 (true)
    cout << "a != b: " << result2 << endl; // Output 1 (true)
    cout << "a > b: " << (a > b) << endl;  // Greater than (1 for true, 0 for false)
    cout << "a < b: " << (a < b) << endl;  // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to
    cout << endl;

    
    // Logical Operators
    
    cout << "Logical Operators:" << endl;
    result1 = (a > b) && (b > 0);  // AND (both conditions must be true)
    result2 = (a > b) || (b < 0);  // OR (at least one condition must be true)
    
    cout << "(a > b) && (b > 0): " << result1 << endl; // Output 1 (true)
    cout << "(a > b) || (b < 0): " << result2 << endl; // Output 1 (true)
    cout << "!(a == b): " << !(a == b) << endl; // NOT (inverts the boolean result)
    cout << endl;

    
    // Bitwise Operators
   
    cout << "Bitwise Operators:" << endl;
    bitResult = a & b;  // Bitwise AND
    cout << "a & b (Bitwise AND): " << bitResult << endl;

    bitResult = a | b;  // Bitwise OR
    cout << "a | b (Bitwise OR): " << bitResult << endl;

    bitResult = a ^ b;  // Bitwise OR (Exclusive OR)
    cout << "a ^ b (Bitwise XOR): " << bitResult << endl;

    bitResult = ~a;     // Bitwise NOT (inverts all bits)
    cout << "~a (Bitwise NOT): " << bitResult << endl;

    bitResult = a << 1; // Left shift (shifts bits of a to the left by 1)
    cout << "a << 1 (Left shift): " << bitResult << endl;

    bitResult = a >> 1; // Right shift (shifts bits of a to the right by 1)
    cout << "a >> 1 (Right shift): " << bitResult << endl;

}


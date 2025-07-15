// Name: Rishita Goswami
// Roll No: 24070123086
// Batch: B1

#include <iostream>  // Header file for standard input/output
using namespace std; // Allows usage of cin, cout, etc., without std:: prefix

int main() {

    // Welcome messages
    cout << "Welcome to C++ Programming!" << endl;
    cout << "Hello World" << endl;

    // Taking a single integer input from the user
    int x;  // Variable declaration
    cout << "Enter a number: ";
    cin >> x;  // User input
    cout << "You entered: " << x << endl;

    // Calculator section
    float a, b, sum, sub, mul, div;  // Variables to store inputs and results

    // Input two numbers from user
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;

    // Perform arithmetic operations
    sum = a + b;
    sub = a - b;
    mul = a * b;

    // Optional: Add a check to prevent division by zero
    if (b != 0)
        div = a / b;
    else {
        cout << "Division by zero is not allowed!" << endl;
        div = 0; // Optional: assign 0 or handle differently
    }

    // Display the results
    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    if (b != 0)
        cout << "Division: " << div << endl;

    return 0; // Successful program termination
}
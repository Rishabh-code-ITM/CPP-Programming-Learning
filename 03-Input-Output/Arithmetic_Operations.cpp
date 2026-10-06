#include <iostream>                                         // Input output stream library
using namespace std;                                        // std namespace use karne ke liye

int main() {                                                // Program yahin se start hota hai (main function)
    double a, b;                                            // Do numbers (double taaki decimal bhi chale)
    cout << "Enter two numbers: ";                          // Do numbers maango
    cin >> a >> b;                                          // Dono numbers input lo
    cout << "Addition       = " << a + b << endl;           // Jod
    cout << "Subtraction    = " << a - b << endl;           // Ghatav
    cout << "Multiplication = " << a * b << endl;           // Guna
    if (b != 0) {                                           // Zero se divide nahi kar sakte, isliye check
        cout << "Division       = " << a / b << endl;       // Bhaag
    } else {                                                // b zero hai
        cout << "Division not possible (divide by zero)" << endl;   // Error message
    }                                                       // if-else end
    return 0;                                               // Program successfully khatam
}                                                           // main function end

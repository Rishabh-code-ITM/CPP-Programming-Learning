#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int a = 10, b = 20;                             // Do numbers compare karne ke liye
    cout << "a == b : " << (a == b) << endl;        // Equal to: true ho to 1, false ho to 0
    cout << "a != b : " << (a != b) << endl;        // Not equal to
    cout << "a > b  : " << (a > b) << endl;         // Greater than
    cout << "a < b  : " << (a < b) << endl;         // Less than
    cout << "a >= b : " << (a >= b) << endl;        // Greater than or equal to
    cout << "a <= b : " << (a <= b) << endl;        // Less than or equal to
    return 0;                                       // Program successfully khatam
}                                                   // main function end

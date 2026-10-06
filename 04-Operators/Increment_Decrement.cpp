#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int a = 5;                                      // Starting value 5
    cout << "a++ = " << a++ << endl;                // Post-increment: pehle value use hoti hai (5), phir a badhta hai
    cout << "a = " << a << endl;                    // Ab a = 6 ho chuka hai
    cout << "++a = " << ++a << endl;                // Pre-increment: pehle a badhta hai (7), phir value use hoti hai
    cout << "a-- = " << a-- << endl;                // Post-decrement: pehle 7 print, phir a = 6
    cout << "--a = " << --a << endl;                // Pre-decrement: pehle a = 5, phir print
    return 0;                                       // Program successfully khatam
}                                                   // main function end

#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int i = 100;                                    // Integer: poora number
    float f = 5.75f;                                // Float: decimal number (kam precision)
    double d = 3.14159265359;                       // Double: decimal number (zyada precision)
    char c = 'A';                                   // Char: ek single character (single quotes mein)
    bool flag = true;                               // Bool: sirf true ya false
    string s = "C++";                               // String: characters ka group (double quotes mein)
    cout << "int: " << i << endl;                   // Integer print karo
    cout << "float: " << f << endl;                 // Float print karo
    cout << "double: " << d << endl;                // Double print karo
    cout << "char: " << c << endl;                  // Char print karo
    cout << "bool: " << flag << endl;               // Bool print hota hai: true = 1, false = 0
    cout << "string: " << s << endl;                // String print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

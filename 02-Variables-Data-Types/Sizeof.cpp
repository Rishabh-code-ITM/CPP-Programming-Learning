#include <iostream>                                                     // Input output stream library
using namespace std;                                                    // std namespace use karne ke liye

int main() {                                                            // Program yahin se start hota hai (main function)
    cout << "Size of char   = " << sizeof(char) << " bytes" << endl;    // sizeof operator memory size bytes mein batata hai
    cout << "Size of int    = " << sizeof(int) << " bytes" << endl;     // int ka size (aam taur par 4 bytes)
    cout << "Size of float  = " << sizeof(float) << " bytes" << endl;   // float ka size (aam taur par 4 bytes)
    cout << "Size of double = " << sizeof(double) << " bytes" << endl;  // double ka size (aam taur par 8 bytes)
    cout << "Size of bool   = " << sizeof(bool) << " bytes" << endl;    // bool ka size (aam taur par 1 byte)
    cout << "Size of long   = " << sizeof(long) << " bytes" << endl;    // long ka size system par depend karta hai
    return 0;                                                           // Program successfully khatam
}                                                                       // main function end

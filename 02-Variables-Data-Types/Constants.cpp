#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

#define PI 3.14159                                  // Macro constant, compile se pehle PI ki jagah 3.14159 aa jata hai

int main() {                                        // Program yahin se start hota hai (main function)
    const int DAYS = 7;                             // const keyword: is variable ki value baad mein change nahi kar sakte
    constexpr int HOURS = 24;                       // constexpr: value compile time par hi pata hoti hai
    cout << "PI = " << PI << endl;                  // Macro constant ka use
    cout << "Days in week = " << DAYS << endl;      // const variable ka use
    cout << "Hours in day = " << HOURS << endl;     // constexpr variable ka use
    // DAYS = 8;                                    // Error aayega, kyunki DAYS constant hai
    return 0;                                       // Program successfully khatam
}                                                   // main function end

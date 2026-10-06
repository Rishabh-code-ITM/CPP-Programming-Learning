#include <iostream>                                         // Input output stream library
using namespace std;                                        // std namespace use karne ke liye

int main() {                                                // Program yahin se start hota hai (main function)
    bool a = true, b = false;                               // true aur false values
    cout << "a && b = " << (a && b) << endl;                // AND: dono true ho tabhi result true
    cout << "a || b = " << (a || b) << endl;                // OR: koi ek bhi true ho to result true
    cout << "!a = " << (!a) << endl;                        // NOT: true ko false, false ko true bana deta hai
    cout << "(5>3) && (2<4) = " << ((5 > 3) && (2 < 4)) << endl;   // Do conditions ko jod kar check kiya
    return 0;                                               // Program successfully khatam
}                                                           // main function end

#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int x = 10;                                     // Simple assignment: x mein 10 store hua
    x += 5;                                         // x = x + 5, ab x = 15
    cout << "After += : " << x << endl;             // 15 print hoga
    x -= 3;                                         // x = x - 3, ab x = 12
    cout << "After -= : " << x << endl;             // 12 print hoga
    x *= 2;                                         // x = x * 2, ab x = 24
    cout << "After *= : " << x << endl;             // 24 print hoga
    x /= 4;                                         // x = x / 4, ab x = 6
    cout << "After /= : " << x << endl;             // 6 print hoga
    x %= 4;                                         // x = x % 4, ab x = 2
    cout << "After %= : " << x << endl;             // 2 print hoga
    return 0;                                       // Program successfully khatam
}                                                   // main function end

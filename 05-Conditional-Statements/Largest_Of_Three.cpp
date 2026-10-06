#include <iostream>                                         // Input output stream library
using namespace std;                                        // std namespace use karne ke liye

int main() {                                                // Program yahin se start hota hai (main function)
    int a, b, c;                                            // Teen numbers ke variables
    cout << "Enter three numbers: ";                        // Teen numbers maango
    cin >> a >> b >> c;                                     // Teeno numbers input lo
    if (a >= b && a >= c) {                                 // Agar a, b aur c dono se bada (ya barabar) hai
        cout << a << " is largest" << endl;                 // To a sabse bada hai
    } else if (b >= a && b >= c) {                          // Agar b, a aur c dono se bada hai
        cout << b << " is largest" << endl;                 // To b sabse bada hai
    } else {                                                // Baaki case mein c sabse bada hoga
        cout << c << " is largest" << endl;                 // c print karo
    }                                                       // if-else end
    return 0;                                               // Program successfully khatam
}                                                           // main function end

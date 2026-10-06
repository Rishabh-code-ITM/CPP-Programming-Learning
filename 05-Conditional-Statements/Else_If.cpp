#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int marks;                                      // Marks store karne ke liye
    cout << "Enter marks (0-100): ";                // Marks maango
    cin >> marks;                                   // Marks input lo
    if (marks >= 90) {                              // 90 ya usse zyada
        cout << "Grade A" << endl;                  // Grade A
    } else if (marks >= 75) {                       // 75 se 89 ke beech
        cout << "Grade B" << endl;                  // Grade B
    } else if (marks >= 50) {                       // 50 se 74 ke beech
        cout << "Grade C" << endl;                  // Grade C
    } else if (marks >= 40) {                       // 40 se 49 ke beech
        cout << "Grade D" << endl;                  // Grade D
    } else {                                        // 40 se kam
        cout << "Fail" << endl;                     // Fail
    }                                               // ladder end (upar se niche pehli true condition chalti hai)
    return 0;                                       // Program successfully khatam
}                                                   // main function end

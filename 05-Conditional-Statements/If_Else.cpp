#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int marks;                                      // Marks store karne ke liye variable
    cout << "Enter marks: ";                        // Marks maango
    cin >> marks;                                   // Marks input lo
    if (marks >= 40) {                              // Agar marks 40 ya usse zyada hain
        cout << "Pass" << endl;                     // To Pass print karo
    } else {                                        // Warna (condition false hone par)
        cout << "Fail" << endl;                     // Fail print karo
    }                                               // if-else block end
    return 0;                                       // Program successfully khatam
}                                                   // main function end

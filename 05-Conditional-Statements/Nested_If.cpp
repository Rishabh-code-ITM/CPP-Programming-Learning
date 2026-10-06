#include <iostream>                                         // Input output stream library
using namespace std;                                        // std namespace use karne ke liye

int main() {                                                // Program yahin se start hota hai (main function)
    int age;                                                // Age store karne ke liye
    bool hasLicense;                                        // License hai ya nahi
    cout << "Enter age and license (1/0): ";                // Dono values maango
    cin >> age >> hasLicense;                               // Dono input lo
    if (age >= 18) {                                        // Pehle outer condition check hogi
        if (hasLicense) {                                   // Outer true hone par hi inner condition check hogi
            cout << "You can drive" << endl;                // Age bhi sahi aur license bhi hai
        } else {                                            // Age sahi hai par license nahi
            cout << "Get a license first" << endl;          // Pehle license banwao
        }                                                   // inner if-else end
    } else {                                                // Age 18 se kam hai
        cout << "You are too young to drive" << endl;       // Abhi gaadi nahi chala sakte
    }                                                       // outer if-else end
    return 0;                                               // Program successfully khatam
}                                                           // main function end

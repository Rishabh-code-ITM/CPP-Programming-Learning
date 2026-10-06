#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    int age;                                        // Integer variable
    float height;                                   // Float variable
    char grade;                                     // Character variable
    cout << "Enter age, height and grade: ";        // Ek hi line mein teen values maango
    cin >> age >> height >> grade;                  // Ek hi cin mein teen alag type ki values lo
    cout << "Age: " << age << endl;                 // Age print karo
    cout << "Height: " << height << endl;           // Height print karo
    cout << "Grade: " << grade << endl;             // Grade print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

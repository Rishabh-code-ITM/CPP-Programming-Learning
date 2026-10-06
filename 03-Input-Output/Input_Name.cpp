#include <iostream>                                 // Input output stream library
using namespace std;                                // std namespace use karne ke liye

int main() {                                        // Program yahin se start hota hai (main function)
    string name;                                    // Naam store karne ke liye string variable
    cout << "Enter your name: ";                    // User se naam maango
    getline(cin, name);                             // getline spaces ke saath poori line padhta hai
    cout << "Hello, " << name << "!" << endl;       // Naam ke saath greeting print karo
    return 0;                                       // Program successfully khatam
}                                                   // main function end

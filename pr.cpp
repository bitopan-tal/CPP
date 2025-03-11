#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Input from user
    cout << "Enter a number: ";
    cin >> num;
    
    // Generating multiplication table
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 100; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
    return 0;
}
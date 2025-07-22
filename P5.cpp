//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-5
#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Choose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Sum = " << a + b << endl;
            break;
        case 2:
            cout << "Difference = " << a - b << endl;
            break;
        case 3:
            cout << "Product = " << a * b << endl;
            break;
        case 4:
            if(b != 0)
                cout << "Quotient = " << a / b << endl;
            else
                cout << "Division by zero error!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ P5.cpp -o P5
PS C:\Users\DELL\Desktop\C++> .\P5.exe
Enter two numbers: 5
8
Choose operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 1
Sum = 13
  */

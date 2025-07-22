//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-5
//Program 1
#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if(a % 2 == 0) {
        cout << a << " is even." << endl;
    } else {
        cout << a << " is odd." << endl;
    }

    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ P1.cpp -o P1
PS C:\Users\DELL\Desktop\C++> .\P1.exe
Enter the number: 5
5 is odd.
  */

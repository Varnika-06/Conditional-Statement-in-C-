//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-5
#include <iostream>
using namespace std;
//Program 2
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
       ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }   
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ P2.cpp -o P2
PS C:\Users\DELL\Desktop\C++> .\P2.exe        
Enter a character: A
A is a vowel.
  */

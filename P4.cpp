//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-5
//Program 4
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid day number!" << endl;
    }
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ L5.cpp -o L5
PS C:\Users\DELL\Desktop\C++> .\L5.exe        
Enter day number (1-7): 5
Thursday*/

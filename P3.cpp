//NAME: Varnika Maurya
//PRN: 24070123160
//Exp-5
//Program 1
#include <iostream>
using namespace std;
//Program 3
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"You entered: "<<a<<", "<<b<<", "<<c<<endl;
    // Finding the largest number
    if(a>b)
    {
        if(a>c)
        {
            cout<<"Largest number is: "<<a<<endl;
        }
        else
        {
            cout<<"Largest number is: "<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Largest number is: "<<b<<endl;
        }
        else
        {
            cout<<"Largest number is: "<<c<<endl;
        }
    }
    return 0;
}
/*
PS C:\Users\DELL\Desktop\C++> g++ P3.cpp -o P3
PS C:\Users\DELL\Desktop\C++> .\P3.exe
Enter three numbers: 9
5
6
You entered: 9, 5, 6
Largest number is: 9
  */

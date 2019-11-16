// Program to demonstrate use of the Stack Template Class.

#include <iostream>

using namespace std;

int main()
{
    // int *p1, *p2;
    // p1 = new int;
    // *p1=42;
    // p2=p1;
    // // *p2=20;
    // cout << "*p1  == " << *p1 << endl;
    // cout << "*p2  == " << *p2 << endl;

    // *p2 = 53;
    // cout << "*p1  == " << *p1 << endl;
    // cout << "*p2  == " << *p2 << endl;
   
    // p1 = new int;
    // *p1=88;
    // cout << "*p1  == " << *p1 << endl;
    // cout << "*p2  == " << *p2 << endl;

    // cout << "Hope you understood\n";
    // return 0;
    
    int *p1, *p2;
    p1=new int;
    p2=new int;
    *p1=10;
    *p2=20;
    cout << *p1 << " " << *p2 <<endl;
    p1 = p2;
    cout << *p1 << " " << *p2 << endl;
    *p1=30;
    cout << *p1 << " " << *p2 << endl;

    // 10 20
    // 20 20
    // 30 30

}

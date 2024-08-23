/*
Author:- Kunal Bairwa.
Topic:- logical operator.
Created on :- 23/08/24.
*/
#include<iostream>
using namespace std;

int main ()
{
    int age = 22;
    bool isstudent = true;

    if (age> 18 && isstudent)
    {
    cout << "you are eligible for a student discount" << endl;
    }
    else
    {
        cout << "you are not eligible for a student discount" << endl;
    }

    return 0;
}
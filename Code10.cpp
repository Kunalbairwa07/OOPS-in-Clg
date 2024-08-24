/*
Author:- Kunal Bairwa.
Topic:- Function.
Created on :- 24/08/24.
*/
#include<iostream>
using namespace std;

class ABC
{
    public:
    int a,b;
    int add()
    {
        return a+b;
    }
    int sub ();
};
int ABC :: sub ()
{
    return a-b;
}
int main ()
{
    ABC A;
    char op;
    int result;
    cout<<"Enter the first value";
    cin>> A.a;
    cout << "enter the operation \n + for addition \n- for subtraction";
    cin>> op;
    cout << "enter the second value ";
    cin >> A.b ;
    if (op=='+')
    {
        result = A.add();
    }
    else
    {
        if (op=='-')
        {
            result = A.sub();
        }
    }
    cout << "result =" <<result;
    return 0;
}
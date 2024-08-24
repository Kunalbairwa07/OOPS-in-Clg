/*
Author:- Kunal Bairwa.
Topic:- Bitwise operator.
Created on :- 23/08/24.
*/
#include<iostream>
using namespace std;

int main ()
{
    int a = 5;
    int b = 3;

    int bitwise_and = a&b;
    int bitwise_or = a/b;
    int bitwise_xor = a^b;
    int bitwise_not = ~a;
    int bitwise_lshift = a<<2;
    int bitwise_rshift = a>>1;

    cout << "AND=" << bitwise_and << endl;
    cout << "OR=" << bitwise_or << endl;
    cout << "XOR=" << bitwise_xor << endl;
    cout << "NOTa=" << bitwise_not << endl;
    cout << "Left shift=" << bitwise_lshift << endl;
    cout << "Right shift=" << bitwise_rshift << endl;
    return 0;
}
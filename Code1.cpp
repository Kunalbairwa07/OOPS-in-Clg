/*
Author:- Kunal Bairwa.
Topic:- Arithmetic operator.
Created on :- 23/08/24.
*/
#include<iostream>
using namespace std;

int main ()
{
    double num1, num2;
    double sum, difference, product, quotient;

    cout << "enter the first no. =";
    cin >> num1;

    cout << "enter the second no. =";
    cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    cout << "\n result="<< sum << "\n difference=" << difference << "\n product=" << product << "\n" ; 


    return 0;

}
/*
Author:- Kunal Bairwa.
Topic:- Structure.
Created on :- 24/08/24.
*/
#include<iostream>
using namespace std;

struct student
{
    char name [10];
    int rollno;
    int marks;
};
int main()
{
    student s;
    cout << "Enter the name, rollno, marks of a student:";
    cin >>s.name>>s.rollno>>s.marks;
    cout <<"name:-"<<s.name<<endl<<"rollno:-"<<s.rollno<<endl<<"marks:-"<<s.marks;
    return 0;
}

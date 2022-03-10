#include "Student.h"
#include<iostream>
#include<conio.h>
using namespace std;

Student::Student()
{
 cout<<"I am form constoctor😂"<<endl;
}

Student::~Student()
{ 
cout<<"I am form disconstoctor"<<endl;
}

void Student::Display()
{
    cout<<"I am from display functoin"<<endl;
}
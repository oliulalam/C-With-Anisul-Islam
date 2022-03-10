#include "MyClass.h"
#include<iostream>
using namespace std;

 void MyClass::display() const
{
   cout<<"i am constant function" <<endl;
}

 void MyClass::display1()
{
   cout<<"i am non-constant function" <<endl;
}


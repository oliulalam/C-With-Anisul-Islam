#include<iostream>
#include<conio.h>
using namespace std;

int x=10; //global variable

void display()
{
  
  cout<<"Inside the display function: "<<x;

}

int main()

{
   //int x=10; //local variable

   cout<<"Inside the main function: "<<x<<endl;

   display();



    getch();
}
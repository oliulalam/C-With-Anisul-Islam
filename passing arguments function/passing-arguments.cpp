#include<iostream>
#include<conio.h>
using namespace std;

//void display(int *num)
void display( int num)
{

     //*num=20;
     num=20;
}

int main()

{
   int x=10;
   cout<<"Before calling the function x:"<<x<<endl;

   //display(&x);
   display(x);

   cout<<"After the calling function x:"<<x<<endl;

     
     getch();
}
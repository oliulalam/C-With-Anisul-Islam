#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int num;

    cout<<"Enter Any int: ";
    cin>>num;

    if(num>0)

    {
       cout<<"positive";
    }

   if(num<0)
   {
      cout<<"nagative";
   }
   
   if (num==0)
   {
      cout<<"zero";
   }
   getch();
}
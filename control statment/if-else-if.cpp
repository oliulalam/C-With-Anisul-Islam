#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
  
  int num;

  cout<<"enter any int: ";
  cin>>num;

  if (num>0)
  
  {
      cout<<"positive";
  }

   else if (num<0)

  {
    cout<<"nagetive";
  }

   else (num==0)

   {
       cout<<"zero";
   }

    getch();
}
#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
   int mark;

   cout<<"enter mark: ";
   cin>>mark;
   
   if (mark>32)
   {
    
         if(mark>=80)
    {
        cout<<"A+";
    }
     else if(mark>=70)
    {
        cout<<"A";
    }
     else if(mark>=60)
    {
        cout<<"A-";
    }
     else if(mark>=50)
    {
        cout<<"B";
    }
     else if(mark>=40)
    {
        cout<<"C";
    }
     else if(mark>=33)
    {
        cout<<"D";
    }

   }

   else {
       cout<<"fall";
   }
    
    

   
    getch();
}
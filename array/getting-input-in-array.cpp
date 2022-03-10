#include<iostream>
#include<conio.h>
using namespace std;

int main ()

{
   int marks[5];

    //input mark
   for( int i=0; i<5; i++)

   {   
       cout<<"enter student mark: "<<i+1<<" = ";
       cin>>marks[i];
   }
    
    cout<<"marks are: ";
    for(int i=0; i<5; i++)
   {
       cout<<marks[i] <<" ";
   }
   

    getch();
}
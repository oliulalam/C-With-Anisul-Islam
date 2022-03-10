#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
   int i, fact=1, n;

   cout<<"Enter any number: ";

   cin>>n;

   for(i=1;i<=n; i++)

   {

       fact=fact*i; //fact formula 
   }
    
    cout<<"fact is: "<<fact;

    getch();
}
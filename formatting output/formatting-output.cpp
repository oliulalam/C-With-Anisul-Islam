#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()

{

 
float num1, num2;

  cout<<"Enter two number:";

  cin>>num1>>num2;

   float sum=num1+num2;

   cout<<setw(20)<< "sum is :"<<sum<<endl;

  float sub=num1-num2;

   cout<<setw(20)<< "sub is :"<<sub<<endl;

    //cout<<showpoint;

   float mul=num1*num2;

   cout <<setw(20)<<"mul is: "<<mul<<endl;
 
   cout<<noshowpoint;

   int div=num1/num2;
    
   cout<<setw(20)<<"div is: "<<div<<endl;

  


    getch();
}
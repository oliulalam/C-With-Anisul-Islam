#include<iostream>
#include<conio.h>
using namespace std;

void display(int num[],int arraySize)
{
    for(int i=0; i<5; i++)
    cout<<num[i]<<endl;
}

int main()

{
  
   int number[5]={10,20,40,60,50};

   display(number,5);



    getch();
}
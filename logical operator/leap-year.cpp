#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
    int year;
    cout<<"enter a year: ";
    cin>>year;

    if(year%4==0 && year%100!=0)
    {
        cout<<"leap year";
    }

    else if (year%400==0)
    {
        cout<<"leap year";
    }
    

    else{

        cout<<"not leap year";
    }




    getch();
}
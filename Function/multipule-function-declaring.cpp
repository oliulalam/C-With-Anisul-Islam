#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void divition(int,int);


int main()
{
  addition(10,3);
  subtraction(10,3);
  addition(10,3);
  divition(10,3);

  cout<<"All function have called";

  getch();
}

//main function er pore user difine function use korle.je user difine function use korben tar ekta protocall bole dite hoy. using namepace er age prototype bole dite hobe.[protocall Ex: void addition(int,int);]
void addition(int a, int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}

void subtraction(int a, int b)
{
    int result=a-b;
    cout<<result<<endl;
}

void multiplication(int a, int b)
{
    int result=a*b;
    cout<<result<<endl;
}

void divition(int a, int b)
{
    float result=(float)a/b;
    cout<<result<<endl;
}
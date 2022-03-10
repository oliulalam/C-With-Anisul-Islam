#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a,int b)

{
    int add=a+b;
    cout<<add<<endl;

}

void sum(int a,int b,int c)

{
    int add=a+b+c;
    cout<<add<<endl;

}


int main()

{
      sum(20,50);
      sum(47,34,4);

    getch();
}
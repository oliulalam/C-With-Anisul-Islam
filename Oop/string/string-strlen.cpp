#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()

{
  char name[]="shapla";
  char name1[10];

    //string strlen stering er lenth ta print kore
  int len = strlen(name);

  cout<<"Lenght of string = "<<len<<endl;
  //string copy kore  
  strcpy(name1,name);
  cout<<"name1= "<<name1;
  

    getch();
}
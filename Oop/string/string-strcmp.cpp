#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()

{
  char name[]="Shapla";
  char name1[]="shapla";

  int value =strcmp(name,name1);

  if(value==0)
  cout<<"String are equal ";
  else
  cout<<"String are not equal";
  

    getch();
}
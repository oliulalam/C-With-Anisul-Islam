#include<iostream>
#include<conio.h>
using namespace std;

class student
{
  public:
  int id;
  double gpa;

};

int main()

{
   student alim, shapla;

   alim.id = 1002;

   alim.gpa = 4.44;

   cout << alim.id<<" "<< alim.gpa<<endl;   


   

   shapla.id = 400;
   shapla.gpa = 5.33; 

   cout<< shapla.id <<" "<< shapla.gpa<<endl;


    getch();
}

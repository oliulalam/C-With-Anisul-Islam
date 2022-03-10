#include<iostream>
#include<conio.h>
using namespace std;

class student
{
  public:
  int id;
  double gpa;

  void display()
  {
      cout <<id<<" "<<gpa<<endl;
  }

};

int main()

{
   student alim, shapla;
   alim.id = 1002;
   alim.gpa = 4.44;
   alim.display();

      
   shapla.id = 4001;
   shapla.gpa = 5.33; 
   shapla.display();

    getch();
}

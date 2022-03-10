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

  void setValue(int x, double y)
  {
      id=x;
      gpa=y;
  }

};

int main()

{
   student alim, shapla;
   alim.setValue(101,3.55);
   alim.display();

      
   shapla.setValue(106,3.54); 
   shapla.display();

    getch();
}

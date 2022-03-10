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

  student(int x, double y)
  {
      id=x;
      gpa=y;
  }

};

int main()

{
   student alim(101, 3.55);
   alim.display();

      
   student shapla(107, 3.58);
   shapla.display();

    getch();
}

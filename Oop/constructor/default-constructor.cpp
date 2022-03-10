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

  student(int x, double y)//parametrized constructor
  {
      id=x;
      gpa=y;
  }

  student()//default constructor
  {
      cout<<"call default construtor:"<<endl;
  }


};

int main()

{
   student oli;
   student alim(101, 3.55);
   alim.display();

      
   student shapla(107, 3.58);
   shapla.display();

    getch();
}

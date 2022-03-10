#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
   int A[2] [3];

   A[0][0]=45;
   A[0][1]=42;
   A[0][2]=20;

   A[1][0]=78;
   A[1][1]=88;
   A[1][2]=25;


   for(int row=0; row<2; row++)

   {
       for(int col=0; col<3; col++)
       {
          cout<< A[row][col] <<" ";
       }
   }

    getch();

}
#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()


{
    while (1)
    {
    int gessNumber,randomNumber;

    cout<<"Enter your gess between 1 to 5: ";
    cin>>gessNumber;

    randomNumber= rand()%5+1;

    if (gessNumber==randomNumber)
     {
         cout<<"You have won"<<endl;
     }
     else{

         cout<<"You have lost"<<endl;
     }


    
}
getch();
}

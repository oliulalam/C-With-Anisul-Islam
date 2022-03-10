#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
   int n, sum=0;

   cout<<"enter the number: ";
   cin>>n;
   int student[n];
   //input
   for(int i=0; i<n; i++)
    { 
        cout<<"marks for student: "<<i+1<<" = ";
        cin>>student[i];
        sum=sum+student [i];
    }
    
    cout<<"Total marks: "<<sum<<endl;
    
    float avg=(float)sum/n;

    cout<<"Average: "<<avg<<endl;

    //miximum minimun

    int max=student[0];

    int min=student[0];

    for(int i=1; i<n; i++)
    {
      if(max<student[i])
      {
          max=student[i];
      }
      if(min>student[i])
      {
          min=student[i];
      }

    }


    cout<<"Maximum marks: "<<max<<endl;
    cout<<"Minmum marks: "<<min;

    getch();
}
#include<iostream>
#include<conio.h>
using namespace std;

int main()

{
   char ch;

   cout << "enter a letter: ";
   cin>>ch;

   ch=towlower(ch);

   switch (ch)
   {
   

   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   break;

   cout<<"vowel";
   
   /*case 'a':
   cout<<"vowel";
       break;

       case 'e':
   cout<<"vowel";
       break;

       case 'i':
   cout<<"vowel";
       break;

       case 'o':
   cout<<"vowel";
       break;

       case 'u':
   cout<<"vowel";
       break;

       */
   
   default:
       cout<<"consonat";
   }


    getch();
}
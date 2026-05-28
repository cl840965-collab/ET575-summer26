/*
CLaudio Lopez 
May 29, 2026
Lab 1: IO streaming
*/

#include<iostream>

using namespace std;

int main( ){
    cout<<"\n------ Example 1: cout object ------"<<endl;
    cout<<"Hellod World!\n"<<endl;
    cout<<"Et 575 \t\t Claudio Lopez"<<endl;
    cout<<"\n------ Example 2: declaring string and character variables -----"<<endl;
    /*
    1) variables are only declared once
    2) naming variables:
        - can't start with number
        - can't have space in between
        - can't have any symbol except _
        - can't use C++ reverse keywords, example 'cout'
    3) a variable name is known as 'identifier'
    */
   string username;
   username = "PeterPan";
   cout<<"U = "<<username<<endl;
   cout<<"Enter another username: ";
   cin>>username;
   cout<<"Updated username: "<<username<<endl;

   cout<<"\n---- Example 3: declaring character variable -----"<<endl;
   char symbol = '%';
   cout<<"Character = "<<symbol<<endl;
   symbol = 64;
   cout<<"Updated character = "<<symbol<<endl;
   char s(35);
   cout<<"Symbol = "<<s<<endl;

   cout<<"\n---- EXCERCISE -------"<<endl;
   string country;
   country = " ";
   char gender = ' ';
   cout<<"Enter a new country: "<<endl;
   cin>>country;
   cout<<"Entered Country: \t"<<country<<endl;
   cout<<"Enter a new gender: "<<endl;
   cin>>gender;
   cout<<"Entered gender: \t"<<gender<<endl;
   return 0;
}
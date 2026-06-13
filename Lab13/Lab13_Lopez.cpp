/*
Claudio Lopez
Lab 13:  introduction to function
June 10, 2026
*/
#include<iostream>
#include "Lab13_function_Lopez.cpp"
using namespace std;

int main(){
    cout<<"\n---example 1: void function----"<<endl;
    printhi();
    printhi();
    printhi();

    cout<<"\n---example 2: void function with agruments----"<<endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);

    cout<<"\n---example 3: functions that return a value----"<<endl;
    int x = dbnumber(6);
    cout<<x<<endl;

    cout<<"\n---example 4: function that returns the area of a rectangle"<<endl;
    float a = arearectangle(2.5, 2);
    cout<<"Area rectangle - "<<a<<endl;

    cout<<"\n---example 5: function with alternative return value"<<endl;
    string r = checknumber(0);
    cout<<r<<endl;

    cout<<"\n---example 6: composition of functions"<<endl;
    int side = positivenumber();
    int asquare = areasquare(side);
    printresult(asquare);

    cout<<"\n---example 7: function calling function"<<endl;
    cout<<tripleaddition();

    cout<<"\n---EXCERCISE"<<endl;
    cout<<collectone()<<endl;
    int stuff = collectone();
    collectfifteen(stuff);

    return 0;
}
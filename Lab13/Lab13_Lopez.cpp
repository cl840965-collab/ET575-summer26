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
    return 0;
}
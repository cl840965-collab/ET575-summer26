/*
Claudio Lopez
June 17, 2026
Lab 17:array application
*/
#include<iostream>
#include "Lab17_F_Lopez.cpp"

using namespace std;

int main(){
    // declare size of the array
    cout<<"\n----example 1: Search application"<<endl;
    const int sizea = 10;
    // declare the array
    int a[sizea]= {0};
    // delcare the variable to save the last collected index
    int listsize;
    // declare the target number
    int targetnumber = 10;

    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"index of found number: "<<foundindex<<endl;

    cout<<"\n----example 2: 2d array"<<endl;
    intro2darray();

    return 0;
}
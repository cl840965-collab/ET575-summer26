/*
CLaudio Lopez
June 15, 2026
Lab 16: intro array
*/
#include<iostream>
#include "Lab16_Lopez_Function.cpp"

using namespace std;

int main(){
    // excercise a
    /*
    int* ptr;
    int var = 7;
    int foo = 21;
    int* ptr = &var;
    int* ptr = &foo;
    int& ref = var;
    */

    // example 1: intro to pointer
    cout<<"\n---- example 1: intro to pointer"<<endl;
    intropointer();

    cout<<"\n---- example 2: checking different data "<<endl;
    string something = "Hello World!";
    a(something);
    cout<<something<<endl;
    b(something);
    cout<<something<<endl;
    c(&something);
    a(something);
    return 0;

}
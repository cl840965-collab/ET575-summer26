/*
CLaudio Lopez
June 15, 2026
Lab 16: intro array
*/
#include<iostream>
#include "Lab16_Lopez_Function.cpp"

using namespace std;

int main(){

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

    cout<<"\n---- example 3: intro to array"<<endl;
    introarray();

    cout<<"\n---- example 4: print each element in an array"<<endl;
    const int s = 4;
    int age[] = {0};

    printelements(s, age);
    updatearray(s, age);
    printelements(s, age);

    int c = countadult(s, age);
    cout<<"Adult 21+ = "<<c<<endl;

    cout<<"\n---EXCERCISE A"<<endl;
    excercesiea();

    cout<<"\n---EXCERCISE B"<<endl;
    int yeah[] = {0};
    excerciseb(10, yeah);
    int w = count(10, yeah);
    cout<<"Even number = "<<w<<endl;
    return 0;
}
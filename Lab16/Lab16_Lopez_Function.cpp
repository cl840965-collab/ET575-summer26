/*
CLaudio Lopez
June 15, 2026
Lab 16: intro array
*/
#include<iostream>

using namespace std;

//excercise a
/*
int* ptr;
int var = 7;
int foo = 21;
ptr = &var;
ptr = &foo;
int& ref = var;
*/

//example 1: intro to pointer
void intropointer(){
    // declare variables
    int num = 12;
    char sym = '#';
    string n = "Peter";

    // declare pointer without 
    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    //check a pointer info
    cout<<ptrint<<endl;

    //initialize a pointer with a location of a variable
    ptrint = &num;
    ptrchar = &sym;

    //check pointers info
    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;

    // get the value of a pointed variable
    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;

}

// example 2
void a(string v){
    cout<<"A = "<<v<<endl;
    v = "Updated A";
}
void b(string& v){
    cout<<"B = "<<v<<endl;
    v = "Updated B";
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}
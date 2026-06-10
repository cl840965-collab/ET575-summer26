/*
Claudio Lopez
Lab 13:  introduction to function
June 10, 2026
*/
#include <iostream>

using namespace std;

// example 1: void function
// void function is a function that doesnt return a value 

void printhi(){
    cout<<"Hello function!"<<endl;
    return; // for a void function, the return is nothing
}


// example 2: void funciton with parameter
// function that prints a name with a message 
// the name is passed to the funciton
void greeting(string username){
    cout<<"Good morning"<<username<<endl;
}

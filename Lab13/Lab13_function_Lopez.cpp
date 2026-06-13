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


// example 3: function that returns a value
// returns the double of a number(integer)
// the number is passed to the function as arugments
int dbnumber(int n){ 
    int dbn = n*2;
    return dbn;
}


// example 4: function that returns the area of a rectangle
// returning value is float, area rectangle = width * length
float arearectangle(int width, int length){
    return width * length;
    float n = 2*(width * length);
    return n;
}

// example 5: function that checks if a is positive, negative, or zero
string checknumber(int number){
    if(number>0)
        return "positive";
    else if (number < 0)
        return "negative";
    else
        return "zero";
}

// example 6: composition of functions
// function 1: collect and return a positive
// validate that the number is positive before returning it
int positivenumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // recollect n if n is not a positive number
    while(n<=0){
        cout<<"Error! Enter a positive number: ";
        cin>>n;
    }
    return n;
}

// function that calculates the area of the square
int areasquare(int side){
    return side*side;
}

void printresult(int area){
    cout<<"The are of a square is "<<area<<endl;
}

// example 7: function calling function
// function 1: returns the sum of two numbers
int addition(int a, int b){
    return a+b;
}

// function 2: returns the triple of the sum of two numbers
int tripleaddition(){
    return 3*(addition(2,3)); // function calling functions
}

int collectone(){
    int o;
    cout<<"Enter a number 1-10: ";
    cin>>o;
    while(o<=1 || o>=10){
        cout<<"Enter a number 1 through 10: ";
        cin>>o;
    }
    return o;
}

void collectfifteen(int start){
    for(int i = start; i<=15; i++){
        cout<<i<<endl;
    }
}

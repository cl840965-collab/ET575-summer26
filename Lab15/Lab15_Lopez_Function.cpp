/*
CLaudio Lopez
June 11, 2026
Lab 15;, recursive function, bulit in function
*/
#include<iostream>

using namespace std;

// example 1: recursive function
// function that calls itself during the execution of the program

void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    //recursive case
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
    
}

// example 2: recursive function to find the summation of a number
//for example, summation of 5, 5+4+3+2+1+0 = 15
int summation(int n){
    // recursive case
    if(n!=0){
        return (summation(n-1)+n);
    }
    else{
        return 0;
    }
}

//example 3: use recursive function to validate a number
// use recursive case to recollect a number if it is not positive

int getpositive(){
    int num;

    cout<<"Enter a number ";
    cin>>num;

    // base case
    if(num>0)
        return 0;

    // recursive case
    else
        return getpositive();
}

// example 4: built in function
// program to calculate the hypotenuse of a right triangle
// function to calculate the hypoteus
#include<cmath>

float hypotenus(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

//function to print result
void printresult(int side1, int side2, float hyp){
    cout<<"The hypotenuse of a right triangle with side"<<side1<<" and "<<side2<<" is "<<hyp<<endl;
}

// example 5: random numbers
#include<cstdlib>

void randomnumber(){
    srand(time(0));
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
}

// example 6: random number between -5 and 10 inclusive
int random_neg5_10(){
    srand(time(0));
    return(-5 + rand()%16);
}

// excercise
int randomnum(){
    srand(time(0));
    return(1 + rand()%100);
}

float grav(int time){
    const double gravity = 9.8;
    double distance = 0.5*gravity*pow(time, 2);
    return distance;
}

void printrt(int n, int g){
    cout<<"The falling distance in "<<n<<" seconds is "<<g<<" meters."<<endl;
}
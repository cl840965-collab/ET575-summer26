/*
Claudio Lopez
Lab 3: Numerical Variables
June 1, 2026
*/
#include <iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: numerical variables ----"<<endl;
    // int, short, or long data type only takes the whole number
    int number = 5.9;
    cout<<"The number is "<<number<<endl;
    // float or double data type takes the number as it is, the whole number with the decimal number"
    // double is twice the size of a float.
    double number1 = 3.123456;
    float number2 = 9.123456789;
    cout<<"The double data type = "<<number1<<endl;
    cout<<"The float data type = "<<number2<<endl;
    
    cout<<"\n ---- Example 2: constant variables ----"<<endl;
    number = 23.65;
    cout<<"The updated number "<<number<<endl;
    // constant variables' valuve CAN'T be changed
    const float EXP = 2.718;
    cout<<"The value of EXP = "<<EXP<<endl;
    
    cout<<"\n ---- Example 3: calculate the height of a falling object----"<<endl;
    // declare the variables
    const float GRAVITY = 9.8;
    float time = 0, height  = 0;

    // collect the time 
    cout<<"Enter the falling time: ";
    cin>>time;

    // calculate the height of the falling object = 0.5*g*time*time
    height = 0.5*GRAVITY*time*time;

    // print result
    cout<<"The height of a falling object at "<<time<<" is "<<height<<" meters "<<endl;
    
    cout<<"\n ---- Example 4: calculate the circumfrence of a circle----"<<endl;
    // formula circumference = 2*radius*pi
    // declare variable 
    const float PI = 3.14159;
    float circumference = 0, radius = 0;

    // collect the radius
    cout<<"Enter a radius: ";
    cin>>radius;

    //calculate the circlumference
    circumference = 2*radius*PI;

    // print result
    cout<<"The circumference is "<<circumference<<endl;

    cout<<"\n ---- EXERCISE----"<<endl;
    int r = 0;
    cout<<"Enter a radius: "<<endl;
    cin>>r;
    float area = PI*r*r;
    float volume = (4/3.0)*PI*r*r*r;
    cout<<"The area of a cirlce is \t"<<area<<endl;
    cout<<"The volume of a sphere is \t"<<volume<<endl;
    return 0;
}
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

    cout<<"\n----example 3: print 2d array elements"<<endl;
    const int rowsize = 2;
    int n[rowsize][3] = {
        {1,2,3},
        {4,5,6}
    };
    
    printarray(n, rowsize);

    cout<<"\n----example 4: 2d array application"<<endl;
    const int students = 3;
    const int subjects = 4;
    // declaring 2d array with inital values
    int grades[students][subjects] ={
        {85, 90, 78, 92},
        {70, 88, 84, 76},
        {95, 91, 89, 93}
    };
    // declaring 1d array
    int studentavg[students];
    studentaverage(grades, students, subjects, studentavg);
    printavg(studentavg, students);

    cout<<"\n----excercise A"<<endl;
    int size = 5;
    int ble[] = {1,2,3,4,5};
    int minNumber = minnum(ble, size);
    cout << "The minimum number is " <<minNumber<<endl;

    cout<<"\n----excercise B"<<endl;
    int s[5][5] = {0};
    int max = 200;
    int min = 150;
    farray2(s);
    int totalNumber = range(s, min, max);
    cout<<"total is = "<<totalNumber<<endl;
    return 0;
}
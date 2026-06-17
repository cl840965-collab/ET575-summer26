/*
Claudio Lopez
June 17, 2026
Lab 17:array application
*/
#include<iostream>

using namespace std;

// example 1: serach application
// function to populate an array. Only collects positive numbers.
// if a zero or negative is enter, the collection process will stop
// numberuserindex stores the index of the last collected poistive number
void filluparray(int *arr, int &numberuserindex, int sizearray){
    int number, index =0;
    do{
        cout<<"Enter a poitive number: ";
        cin>>number;
        if(number > 0){
            arr[index] = number;
            index++;
        }
    }while(number>0 && index < sizearray);

    numberuserindex = index;
}

// function to print each element in the array
void printelements(int *arr, int numberuserindex){
    for(int i = 0; i<numberuserindex; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// function to search if a target number exits in an array
// the function returns the index of the ofund number
// if the target number doesnt exist in the array, the function returns -1
int search(int *arr, int &numberuserindex, int targetnumber){
    int index = 0;
    bool found = false;
    while(index<numberuserindex){
        if(targetnumber == arr[index])
            found = true;
        else
            index++;

    }

    if(found)
        return index;
    else
        return -1;
}

// example 2: 2d array
void intro2darray(){
    // declaring 2d array
    int graylevel[255][10];

    // declaring 2d array with inital value
    // 2-by-5 matrix (2 rows and 5 columns)
    int temperature[2][5] = {
        {78, 56, 60},           // c++ replace missing initaling with 0
        {100, 89, 92, 90, 80}
    };

    // accessing a value in a 2d array
    cout<<"The temperature in 1st row, 2nd column"<<temperature[0][1]<<endl;
}
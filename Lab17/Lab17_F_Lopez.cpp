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

// example 3: print each value in a 2d array
// the size of the colum HAS to be passed in a 2d array
// int arr[][3] --> int (*arr)[3]
void printarray(int arr[][3], int rows){
    for(int r = 0; r<rows; r++){
        for(int c = 0; c<3; c++){
            cout<<arr[r][c]<<"\t";
        }
        cout<<endl;
    }
}

// example 4: 2d array application
// function to find and print the average of students grade
// 2d setip : row --> student, column --> subjects.
// 2d array of 3 students and 4 subjects per student
void studentaverage(int (*arr)[4], int sizestudents, int sizesubjects, int *avg){
    for(int r = 0; r<sizestudents; r++){
        int sum = 0;
        int index = 0;
        for(int c = 0; c<sizestudents; c++){
            sum += arr[r][c];
        }
        //cout<<"Student "<<r+1<<" average grade = "<<(sum/sizesubjects)<<endl;
        // save the average of each student in a 1d array, avg
        avg[index] = sum/sizesubjects;
        
        cout<<index<<avg[index]<<endl;
        index++;
    }
}

// function to print the average of each student
void printavg(int *avg, int sizestudents){
    for(int i=0; i<sizestudents; i++){
        cout<<"Student "<<i+1<<" average grade = "<<avg[i]<<endl;
    }
}

int minnum(int *a, int sizea){
    int min = a[0];
    for(int i =0; i<sizea; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    return min;
}

void farray2(int s[][5]){
    srand(time(0));
    for(int l = 0; l<5; l++){
        for(int c = 0; c<5; c++){
            s[l][c] = 1 + rand()%255;
        }
    }
}

int range(int s[5][5], int min, int max){
    int count = 0;
    for(int i =0; i<5; i++){
        for(int x =0; x<5; x++){
            if(s[i][x] >= min && s[i][x] <= max){
                count++;
            }
        }
    }
    return count;
}
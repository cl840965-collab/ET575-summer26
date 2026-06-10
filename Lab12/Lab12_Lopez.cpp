/*
Claudio Lopez
June 10, 2026
Lab 12: nested loops
*/
#include <iostream>
using namespace std;

int main(){
    cout<<"\n---example 1: nested for loop ----"<<endl;
    // one run of the outer loop will have complete cycle of the inner loop
    int i = 0;
    while(i++<3){
        cout<<"OUTER loop"<<endl;
        // inner loop, print from 1 to 5
        cout<<"\t\t INNER loop"<<endl;
        int j = 0;
        while(j++<5){
            cout<<"\t"<<j;
        }
        cout<<endl;

    }

    cout<<"\n---example 2: nested for loop ----"<<endl;
    // cinema seats arrangement
    // row and seats per row
    int row=0, seats=0;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of seats per row: ";
    cin>>seats;

    for(int r = 1; r<=row; r++){
        for(int c = 1; c<=seats; c++){
            cout<<"Row "<<r<<" Seat "<<c<<endl;
        }
        cout<<endl;
    }

    cout<<"\n---example 3: graphing using nested loop ----"<<endl;
    const int GRAPHSIZE = 9;
    for(int row = 1; row<=GRAPHSIZE; row++){
        for(int col = 1; col<=GRAPHSIZE;col++){
            if(col==5 || row ==5)
                cout<<" x ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n---example 4: graphing H using nested loops ----"<<endl;
    int dimension = 10;
    for(int row =1; row<=dimension; row++){
        for(int col =1; col<= dimension; col++){
            if((col>=3 && row >= 3 && row<=8 && col<=4) || 
            (row >= 5 && row <= 6 && col >=5 && col<=6) || 
            (col>=7 && col<=8 && row >= 3 && row <=8))
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }

    cout<<"\n--- EXCERCISE A;"<<endl;
    int guess = 5;
    int uGuess = 0;
    cout<<"Guess a number 1-10: ";
    cin>>uGuess;

    while(uGuess != guess){
        while(uGuess <1 || uGuess >10){
            cout<<"Enter a number between 1 and 10:";
            cin>>uGuess;
        }
        if(uGuess<guess){
            cout<<"Low,try again: ";
            cin>>uGuess;
        } 
        else if(uGuess>guess){
            cout<<"High,try again: ";
            cin>>uGuess;
        }
    }
    cout<<"Yup correct"<<endl;

    cout<<"\n--- EXCERCISE B"<<endl;
    int size = 10;
    for(int row =1; row<=size; row++){
        for(int col =1; col<=size; col++){
            if(col>=3 && col<=4 && row>=3 && row<=8 || col>=5 && col<=6 && row>=7 && row<=10 || col>=7 && col<=8 && row>=3 && row<=8)
                cout<<" % ";
            else
                cout<<" . ";
        }
        cout<<endl;
    }
    return 0;
}
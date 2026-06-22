#include<iostream>
using namespace std;

#include<ctime>

void winningDigits(int arr[5]){
    srand(time(0));

    for(int i = 0; i<5;i++){
        arr[i] = 1 + rand()%1;
    }
}
void userTicket(int s[5]){
    for(int i = 0; i < 5; ++i){
        cout << "Enter a number between 1-19: ";
        cin >> s[i];
    }
}
int checkWinner(int arr[5], int s[5]){
    int match = 0;
    for(int i = 0; i<5;i++){
        if(arr[i]==s[i]){
            match++;
        }
    }
    return match;
}
void print(int s[5],int arr[5],int r){
    cout<<"\nWinning digits: ";
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
    cout<< "\nYour ticket: ";
    for(int i = 0;i < 5;i++){
        cout<<arr[i] << " ";
    }
    cout<<"\n\nMatch numbers "<<r<<endl;
}
#include<iostream>
#include "Homework4_F_Lopez.cpp"
using namespace std;

int main(){
    int s[5];
    int arr[5];
    winningDigits(arr);
    userTicket(s);
    int r = checkWinner(s, arr);
    print(s, arr, r);
}

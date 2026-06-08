#include <iostream>
using namespace std;

int main()
{
    // QUESTION 1
    int age;
    double ticketPrice;

    cout << "Enter your age: " << endl;
    cin >> age;

    bool validAge = (age > 0);
    bool child = (age <= 12);

    if (validAge){
        if (child)
            ticketPrice = 6.50;
        else
            ticketPrice = (age <= 18) ? 9.75 : (age <= 64) ? 14.50 : 8.25;
    }
    else {ticketPrice = 0.0;}

    cout << "A person age " << age << " pays $" << ticketPrice << endl;

    // QUESTION 2 
    int n = 10, m = 25;
    
    m %= n;
    n *= 2;
    n--;
    m++;
// not --> and --> or
    bool check1 = m>=n || n <= 20 || 10>m;
    bool check2 = !(n%2==1); 

    
    // QUESTION 3
    int n = 10;
    cout<<"Enter a number: ";
    cin>>n;
    string answer =" ";

    if(n%3==0 && n!=0){
        /*  inner conditional statement: write a conditional statement for if: 
            -the number is multiple of 3 and positive, set variable 'answer' to 'positive multiple of 3'
            -on the other hand, set variable 'answer' to 'negative multiple of 3'
        */
    }
    else{
        cout<<"zero"<<endl;
    }

    // QUESTION 4
    string password = "codespace";
    int a = password.length(); 
    int b = a-6; 
    int c = password.find("e"); 
    password.replace(b,c,"NONE"); 
    
    // QUESTION 5
    char symbol = '@';

    bool s = symbol>=60;

    switch (s)
    {
    case 1:
        cout<<"NY"<<endl;
        break;
    case 0:
        cout<<"FL"<<endl;
        break;
    default:
        cout<<"MN"<<endl;
        break;
    }
/*
Claudio Lopez
June 4, 2026
lab 9: switch-case statement
*/
#include<iostream> 

using namespace std;

int main(){
    cout<<"\n--- Example 1: switch-case statement"<<endl;
    // ask the user to select a day=off(number)
    // declare variables
    int dayoff = 0;

    // collect dayoff
    cout<<"Select day-off"<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    
    cin>>dayoff;

    // switch-case statement
    switch (dayoff)
    {
    case 1:
        cout<<"You are off Monday"<<endl;
        break;
    case 2:
        cout<<"You are off Tuesday"<<endl;
        break;
    case 3:
        cout<<"You are off Wednesday"<<endl;
        break;
    case 4:
        cout<<"You are off THursday"<<endl;
        break;
    case 5:
        cout<<"You are off Friday"<<endl;
    default:
        cout<<"Wrong dayoff!"<<endl;
        break;
    }

    cout<<"\n--- Example 2: select a gender"<<endl;
    // select gender using character
    // declare variables
    char gender;
    string selectedgender = "";

    // collect the gendeer 
    cout<<"Select a gender";
    cout<<"m for male"<<endl;
    cout<<"f for female"<<endl;
    cout<<"o for other"<<endl;
    cin>>gender;

    //switch case
    switch (gender)
    {
    case 'm': case 'M':
        /* code*/
        selectedgender = "MALE";
        break;
    case 'f': case 'F':
        selectedgender = "FEMALE";
        break;
    case 'o': case 'O':
        selectedgender = "OTHER";
        break;
    default:
        selectedgender = "UNNKNOWN";
        break;
    }

    // print result
    cout<<"Selected gender = "<<selectedgender<<endl;

    cout<<"\n -----EXERCISE-----"<<endl;
    int num = 0;
    cout<<"Enter a number : ";
    cin>>num;
    char entered;
    cout<<"Do you want to double your number? Y/N:";
    cin>>entered;
    switch (entered)
    {
    case 'y': case 'Y':
        num *= 2;
        cout<<"Your number is set to "<<num<<endl;
        break;
    case 'n': case 'N':
        cout<<"Your number is set to "<<num<<endl;
        break;
    default:
        num = 0;
        cout<<"Your number is set to "<<num<<endl;
        break;
    }

    return 0;
}
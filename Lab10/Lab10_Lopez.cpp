/*
Claudio Lopez
lab 10: loop mechanics
June 9, 2024
*/
#include <iostream>
using namespace std;
int main(){
    cout<<"\n--- example 1: for loop as counter ---\n"<<endl;
    // for loop has three main statemnet for (initialization; boolean expression; update action)
    // use a loop to print Hello 5 times
    int x = 3;
    for (int x = 1; x <= 5; x++){
        cout<<"Hello "<<x<<endl;
    }
    cout<<"End of for loop, Value of x = "<<x<<endl;

    cout<<"\n---- example 2: for loop as a counter with different steps ---"<<endl;
    // print from 1 to 9 step 2
    for (int x = 1; x <= 9; x+=2){
        cout<<x<<"\t";
    }

    cout<<"\n---- example 3: for loop as a decrementing counter with different steps---"<<endl;
    // print from 10 to -10 step of 3
    for (int x = 10; x >= -10; x-=3){
        cout<<x<<"\t";
    }
    cout<<endl;



    cout<<"\n---- example 4: for loop with conditional statements ---"<<endl;
    // count the numbers that are mutiplied of 5 between -20 and 20 step of 4
    int counter = 0;
    int sumpositive = 0;
    for (int x = -20; x <= 20; x+=4){
        cout<<x<<"\t";
        if (x % 5 == 0 && x != 0) counter ++;
        if (x > 0) sumpositive += x;
    }
    cout<<endl<<"numbers that are multipled of 5 = "<<counter<<endl;
    cout<<"sum of all positive numbers = "<<sumpositive<<endl;

    cout<<"\n---- example 5: while loop as a counter---"<<endl;
    // while loop to print from 1 to 5, inclusive
    int n = 1;
    while(n<=5){
        cout<<n<<"\t";
        n++;
    }
    cout<<endl;

    n = 1;
    while(n++ <=5){
        cout<<n<<"\t";
    }
    cout<<endl;
    n = 1;
    while(++n <=5){
        cout<<n<<"\t";
    }
    cout<<"\n ---- example 6: while loop to validate an input ---"<<endl;
    // while loop to recollect a number
    // accept numbers betwwen 1 and 9
    int number=0;
    cout<<"Enter a number: ";
    cin>>number;

    // while loop to recollect a number that is not between 1 and 9
    while (!(number>=1 && number <=9)){
        cout<<"Enter a new number between 1 and 9: ";
        cin>>number;
    }
    cout<<"Collected number = "<<number<<endl;

    cout<<"\n---- EXCERCISE ----"<<endl;
    int lcounter = 0;
    for (int v = 21; v >= -21; v-=5){
        cout<<v<<"\t";
        if (v % 2 == 0 && v != 0) lcounter ++;
    }
    cout<<endl<<"divisible by 2: "<<lcounter<<endl;
    cout<<"\n---- EXCERCISE 2 ----"<<endl;
    int start = 0;
    cout<<"Enter a number: ";
    cin>>start;
    for (int i = start; i<=30; i+=4){
        cout<<i<<"\t";
    }
    return 0;
}
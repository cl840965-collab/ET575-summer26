/*
CLaudio Lopez
June 11, 2026
Lab 15;, recursive function, bulit in function
*/
#include<iostream>
#include "Lab15_Lopez_Function.cpp"

using namespace std;

int main(){
    cout<<"\n---- Example 1: recursive funtion"<<endl;
    cheers(3);

    cout<<"\n---- Example 2: summation recursive"<<endl;
    int s = summation(5);
    cout<<s<<endl;

    cout<<"---- Example 3: sumation recursive function"<<endl;
    int n = getpositive();
    cout<<"Collected number: "<<n<<endl;

    cout<<"---- Example 4: built in function"<<endl;
    int s1 = getpositive();
    int s2 = getpositive();
    float h = hypotenus(s1, s2);
    printresult(s1, s2, h);

    cout<<"---- Example 5: random function"<<endl;
    srand(time(0));
    randomnumber();
    cout<<endl;
    randomnumber();

    cout<<"---- Example 6: range of randome function"<<endl;
    int r = random_neg5_10();
    cout<<r<<endl;


    cout<<"EXCERCISE"<<endl;
    int sew = randomnum();
    int sed = grav(sew);
    printrt(sew,sed);
    return 0;
}
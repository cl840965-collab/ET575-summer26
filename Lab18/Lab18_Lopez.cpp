/*
Claudio Lopez
June 18, 2026
Lab 18, console failure and file streaming
*/
#include<iostream>
#include "Lab18_F_Lopez.cpp"

using namespace std;

int main(){
    cout<<"\n---example 1: console failure test"<<endl;
    checknumber();

    cout<<"\n--- example 2: console failure"<<endl;
    float n = validatenumber();
    cout<<n<<endl;

    cout<<"\n--- example 3: read file"<<endl;
    iofiles();

    cout<<"\n--- example 4: write file"<<endl;
    writefile();

    cout<<"\n--- example 5: append data to a file"<<endl;
    string filename = "outputfile.txt";
    appendfile(filename);
    return 0;
}
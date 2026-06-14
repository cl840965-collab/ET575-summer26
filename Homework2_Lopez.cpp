/*
Claudio Lopez
Homework 2: Loop mechanics
*/
#include<iostream>

using namespace std;
int main(){
    int usernum;
    do{
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>usernum;
        if (usernum < 10)
            cout<<usernum<<" is invaild. Please enter a vaild number."<<endl;
    } while (usernum < 10);
    cout<<usernum<<" is a vaild number"<<endl;

    int tmin;
    int tmax;
    cout<<"Enter a minimum: ";
    cin>>tmin;
    cout<<"Enter a maximum: ";
    cin>>tmax;
    int min;
    int max;
    if (tmin > tmax){
        max = tmin;
        min = tmax;
    } else {
        min = tmin;
        max = tmax;
    }

    for(int i = min; i <= max; i++){
        cout<<i<<" ";
    }
    cout<<endl;

    const int dim = 10;
    for(int row = 1; row <= dim; row++){
        for(int col = 1; col <= dim; col ++){
            if(col >=3 && col < 4 && row >= 4 && row <=5 || col >= 4 && col <5 && row >= 3 && row <=6 || col >= 5 && col < 6 && row >= 5 && row <=7 || col >= 6  && col <7 && row >= 3 && row <=6 ||  col >=7 && col < 8 && row >= 4 && row <=5)
                cout<<" % ";
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }
    return 0;
}
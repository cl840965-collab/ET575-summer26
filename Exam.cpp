#include <iostream>
using namespace std;
int main(){
    int score = 0;
    int homework = 80;
    int exams = 76;
    int labs = 83;

    score = (homework + exams + labs) / 3;
    if (score > 60){
        cout<<"You passed"<<endl;
    }
    else if (score >= 61 && score < 74){
        cout<<"Your grade is C"<<endl;
    }
    else if (score >= 75 && score < 87){
        cout<<"Your grade is B"<<endl;
    }
    else if (score >= 88 && score < 100){
        cout<<"Your grade is A"<<endl;
    }
    else {
        cout<<"You Failed"<<endl;
        if (score < 60 && score >= 51){
            cout<<"You were close to passing"<<endl;
        }
        else if (score <= 50 && score > 0){
            cout<<"You need a significant improvement"<<endl;
        }
        else if (score <= 0){
            cout<<"something went wrong"<<endl;
        }
    }
    return 0;
}

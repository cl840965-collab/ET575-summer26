/*t
Claudio Lopez
Lab 4: Numerical Operators
June 1, 2026
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n---- Example 1 assigment operators ----"<<endl;
    int n = 9, m = 2;
    cout<<"n = "<<n<<endl;

    // adding 1 and update the value
    n++;
    cout<<"updated n = "<<n<<endl;

    // subtract 1 from m and update the value
    m --;
    cout<<"Update m = "<<m<<endl;

    //add m value into n and update value of n
    n += m;
    cout<<"updated n "<<n<<endl;

    // triple the value and update
    m *=3; // m = m*3
    cout<<"Update m = "<<m<<endl;

    // modulus: find and return the remained of a divison
    cout<<"Modulus, Remainder = "<<n%m<<endl;
    cout<<"n = "<<n<<endl;
    n %= m;
    cout<<"n = "<<n<<endl;

    cout<<"\n---- Example 2 comparsion operators ----"<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m = "<<m<<endl;
    cout<<"Are n and m equal?   "<<(n==m)<<endl;
    cout<<"Is n not equal to m?     "<<(n != m)<<endl;
    cout<<"Is m greater than or equal to n?     "<<(m >= n)<<endl;
    cout<<"\n---- Example 3 logical/boolean operators ----"<<endl;
    // AND operator, &&, returns a TRUE onlt if ALL statements are true
    // OR operator, || returns a TRUE one of the statements is true
    // NOT or INVERTER operator, ! returns a TRUE for a FALSE, or FALSE for a TRUE
    bool check1 = m < n;
    bool check2 = n <= m;
    bool check3 = m != n;

    cout<<"Check1 = "<<check1<<endl;
    cout<<"Check2 = "<<check2<<endl;
    cout<<"Check3 = "<<check3<<endl;

    bool result1 = check1 && check2 && check3; // false && true && true = false
    bool result2 = check1 || check2 || check3; // false || true || true = True
    bool result3 =  ! check2; // ! true = false

    cout<<"Result 1 = "<<result1<<endl;
    cout<<"Result 2 = "<<result2<<endl;
    cout<<"Result 3 = "<<result3<<endl;

    
    cout<<"\n---- EXCERCISE ----"<<endl;
    int num = 0;
    char character = ' ';
    cout<<"Enter a integer: "<<endl;
    cin>>num;
    cout<<"Enter a number: "<<endl;
    cin>>character;
    num*=3;
    cout<<"Triple the number: \t"<<num<<endl;
    cout<<"Remainder of character = \t"<<character%60<<endl;
    cout<<"is number less than or equal to character?   \t"<<(num<=character)<<endl;
    bool what = num <= -1;
    bool checkif = character != 5;
    bool all = what || checkif;
    cout<<"Result after comparison   "<<all<<endl;
    bool charactercheck1 = character >= -2;
    bool charactercheck2 = character <= 2;
    bool checkall = charactercheck1 && charactercheck2;
    cout<<"Is number between -2 and 2: "<<checkall<<endl;6
    return 0;
}
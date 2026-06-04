/*
Claudio Lopez
June 3, 2026
lab 8: control flow
*/
#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (1.8 * celsius) + 32;
}

int main() {
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    double f = celsiusToFahrenheit(c);
    cout << c << "°C is " << f << "°F" << endl;
    int user = 0;
    cout<<" What do we convert your Temperature into?: \n 1. Celsius to Fahrenheit\n 2. Fahrenheit to Celsius\n 3. Celsius to Kevin\n 4. Fahrenheit to Kelvin: ";
    cin >>user;
  if(user==1){
    cout << c << "°C is " << f << "°F" << endl;
  }
  else if(user==2){
    c = (f - 32.0) * 5.0 / 9.0;
    cout<<f << "F is "<< c << "c"<<endl;
  }
  else if(user==3){
    double k = c + 273.15;
    cout << c << " °C is equal to " << k << " K" <<endl;
  }
  else if(user==4){
    double ktf = (f - 32.0) * 5.0 / 9.0 + 273.15;
    cout << f << " F is equal to " << ktf << " K" << endl;
  }
  else{
    cout<<"ERROR"<<endl;
  }
    return 0;
}
// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain. Yes it uses premade variables

// 2. Are there any issues or improvements you noticed? Explain. None that i noticed

// 3. What methods did you use to test if the AI code was working as it should? Explain. I inputed wrong/incorrect input, like strings and negative numbers.
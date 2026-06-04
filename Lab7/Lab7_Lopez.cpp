/*
Claudio Lopez
June 3, 2026
lab 7: control flow
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1; bool variable"<<endl;
    // bool variable to check if a number is positive
    // declare variables
    int n;
    bool checkpositive; // bool values are 0 (false), 1 (true)

    // collect number
    cout<<"Enter a number: ";
    cin>>n;

    // check if a number is positive
    checkpositive = n > 0;

    // print results
    cout<<"Is number "<<n<<" posistive? "<<checkpositive<<endl;

    // update checkpositive
    checkpositive = -5;
    // for a bool value that is not 0 or 1, the return is always 1

    cout<<"updated checkpositive = "<<checkpositive<<endl;

    cout<<"\n ---- Example 2; If statement"<<endl;
    // check is n is zero
    int c = 10;
    if(n==0){
        cout<<"n is zero!";
        c += 20;        
    }
    cout<<"\t Updated c = "<<c<<endl;

    cout<<"\n ---- Example 3; If-else statement"<<endl;
    // if-else behave as ON/OFF switch
    // check if a number is even or odd. Even numbers are divisibel by 2, the remainder is 0.
    if(n%2 == 0){
        cout<<n<<"Is an EVEN number"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }

    cout<<"\n ---- Example 4; If-else statement"<<endl;
    /*
    - Ultraviolet: Less than 379 nm and greater than or equal to 10 nm
    - Blue: 380 ro 520 nm
    - Green: 521 to 590 nm
    - Red: 591 to 740 nm
    - Infrared: morehan 741 nm
    - Any wavelength less than 10 nm is undefined.
    */
   // declare variables
   int wavelength = 0;
   string emittedlight = " ";
   // update wavelength
   cout<<"Enter a wavelength: ";
   cin>>wavelength;

   // mulitway
   if(wavelength<379 && wavelength >=10){
    emittedlight = "ULTRAVIOLET";
   }
   else if(wavelength<=520 && wavelength>=380){
    emittedlight = "BLUE";
   }
   else if(wavelength<=590 && wavelength>=521){
    emittedlight = "GREEN";
   }
   else if(wavelength<=740 && wavelength>=591){
    emittedlight = "RED";
   }
   else if(wavelength>=741){
    emittedlight = "INFRARED";
   }
   else {emittedlight = "UNDEFINED";}

   // print result
   cout<<wavelength<<" nm emits "<<emittedlight<<" light"<<endl;

   cout<<"\n ---- Example 5: conditional operator ----"<<endl;
   // conditonal operator: three operands --> condition ? expression1 (true): exoression 2 (false)
   /*
   
   example3)
   if (n%2 == 0){
        cout<<n<<" is an EVEN number"<<endl;
   }
   else{
        cout<<n<<" is an ODD number"<<endl;
    }
   */
  cout<<n<<((n%2==0) ? " is an EVEN number": " is ODD number")<<endl;
  
  cout<<"\n ----Example 6: condtional operator"<<endl;
  // check if n is greater than 10. if n is greater than 10, set the max value to n.
  int max = 10;
  bool checkmax = false;
  // if else
  if (n>max){checkmax = true;}
  else{checkmax = false;}
  // condition  to check if n is greater than max
  checkmax = n>max ? true : false;
  // print result
  cout<<"Is greater than 10? = "<<checkmax<<endl;

  cout<<((n > 10) ? "N is greater than 10" : "N is not greater than 10");
  cout<<"\n ----Example 7: nested condtional statement"<<endl;
  // check is a number, n, is postive, negative, or zero
  if(n>0 && n%2 == 0){
    cout<<"postive and odd number"<<endl;
  }
  else if(n>0 && n%2!=0){
    cout<<"positive and odd number"<<endl;
  }
  else if(n<0 && n%2==0){
    cout<<"negative and even number"<<endl;
  }
  else if(n<0 && n%2!=0){
    cout<<"negative and odd number"<<endl;
  }
  else{
    cout>>"zero"<<endl;
  }
  if(n>0){
    // inner condtional statement
    if(n%20==0)
        cout<<"Positive and even number"<<endl;
    else
        cout<<"postive and odd number"<<endl;
    
  }
  else if(n<0){
    if(n%2==0)
        cout<<"negative and even number"<<endl;
    else
        cout<<"negative and odd number"<<endl;
  }
  else{
    cout<<"zero"<<endl;
  }
   cout<<"--- EXCERCISE"<<endl;
   float package = 0;
   cout<<"Enter the weight of ur package: ";
   cin>>package;
   float shipping = 0;
   if(package<=2 && package >=0){
    shipping += 5.00;
    cout<<"A package of weight "<<package<<" costs $"<<shipping<<endl;
   }
   else if(package>2 && package<=5){
    shipping += 8.20;
    cout<<"A package of weight "<<package<<" costs $"<<shipping<<endl;
   }
   else if(package>5 && package<=10){
    shipping += 10.25;
    cout<<"A package of weight "<<package<<" costs $"<<shipping<<endl;
   }
   else if(package>10){
    shipping += 12.50;
    cout<<"A package of weight "<<package<<" costs $"<<shipping<<endl;
   }
   else if(package<=0){
    shipping += 0;
    cout<<"A package of weight "<<package<<" costs $"<<shipping<<endl;
   }
    return 0;
}
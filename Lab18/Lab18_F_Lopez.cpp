/*
Claudio Lopez
June 18, 2026
Lab 18, console failure and file streaming
*/
#include<iostream>
#include <fstream>

using namespace std;

void checknumber(){

    //reset the cin statur
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"END OF FUNCTION"<<endl;
}

//example 2: validate a data type
float validatenumber(){
    float n;
    do{
        cout<<"Enter a number: ";
        if(!(cin>>n)){
            cout<<"Invaild data type!"<<endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else{
            break;
        }
    }while(true);
    return n;
}

void iofiles(){
    // declare the objects to handle files
    // input file object 'fin'
    ifstream fin;
    // output file object 'fout'
    ofstream fout;

    // read file 'sampelfile.txt'
    // use the ;fin; object along the ;open; method to open the txt file
    fin.open("samplefile.txt");

    // declare a variable 'line' temporary store each line of 'samplefile.txt'
    string line;

    /*
    while loop to gothrough each line in the txt file
    for each line, we are going to use the getline() method to read and hole each lin ein variable 'line'
    */
   int linecouter = 1;
   while(getline(fin, line)){
    cout<<"Line "<<line<<" = \t"<<endl;
    linecouter++; 
   }

   //close the file
   fin.close();
}

// example 4: write file
// writing a file with an 'open' mehtod, c++ will automaticaly creat the file if it doesnt exist
// if the file exists, then c++ will overwrite the file
void writefile(){
    // output fileo object 'fout'
    ofstream fout;

    fout.open("outputfile.txt");

    // to write in a file, we use the ouput file object 'fout'
    fout<<"Good Morning!"<<endl;
    for(int n =3; n>0; n--){
        fout<<n<<endl;
    }
    fout<<"End of file"<<endl;

    fout.close();
}

// example 5L appeneding data to an existing file
// fout.open() we need to add argument ios::app
void appendfile(string filename){
    // outout file object 'fout'
    ofstream fout;
    fout.open(filename, ios::app);
    fout<<"Claudio Lopez"<<endl;

    fout.close();
}
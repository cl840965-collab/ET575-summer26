/*
June 2, 2026
Claudio Lopez
Lab 5: String methods
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n--- Example 1: string indexing "<<endl;
    // characters within a string is accessiable when using an index number 
    // index number starts from 0 (left-most)
    string username = "peterpan123";
    cout<<"The fourth character of username = "<<username[3]<<endl;

    // at() method can be used to access a character in a string
    cout<<"The sixth character of username = "<<username.at(5)<<endl;

    cout<<"\n---- Example 2: length of string "<<endl;
    // length method shows the number of characters in a string including the whitespace
    int num_username = username.length();
    cout<<"There are "<<num_username<<" characters. "<<endl;

    cout<<"\n---- Example 3: adding string "<<endl;
    // string can be concatenated or added by using the + operator
    string n = "Never";
    string m = "Again";
    cout<<n + m<<endl;

    cout<<"\n---- Example 4: subtracting characters from a string "<<endl;
    // substr() method extracts characters from a string
    // substr(x, y) --> x = starting index, y = amount of characters to be extracted from index x
    cout<<"Extracted word = "<<n.substr(1,4)<<endl;
    
    cout<<"\n---- Example 5: inserting characters into a string "<<endl;
    // insert() method insert characters into a string
    // insert(x, y) --> x = inserting index position, y = characters to be inserted
    // for example, insert LAND in between username = "peterLAND123"
    cout<<username<<endl;
    username.insert(5, "LAND"); //automatically update the string value, accessor method
    cout<<username<<endl;

    cout<<"\n---- Example 6: add character/s to the end of a string "<<endl;
    // append() method adds characters to the end of a string
    // append(x) ---> x = characters to be added to the end of the string
    username.append("END"); // automatically update the string valuve, accessor method
    cout<<username<<endl;

    cout<<"\n---- Example 7: replacing characters in a string "<<endl;
    // replace() method replaces characters in a string
    // replace(x,y,z) --> x = indez where the replacement, y = number of characters to be replaced from x, z = new characters of the replacement
    string name = "Peter Pan";
    cout<<name<<endl;
    // replace 'eter' with 'atrick'
    name.replace(1, 4, "atrick");
    cout<<name<<endl;

    cout<<"\n---- Example 8: erasing characters in a string "<<endl;
    // erase() method erases characters from a string
    // erase(x,y) --> x = starting index where characters will be removed, y = amount of characters to be remved from index x 
    // erase the word 'an' from "Patrick Pan"
    name.erase(9,2); // automatically update the string valuve, accessor method
    cout<<name<<endl;

    cout<<"\n---- Example 9: Define the characters from a string "<<endl;
    // find() method return the index of a found character
    // find(x) --> x = character/s to be found
    // if a character 
    cout<<username<<endl;
    int index_r = username.find("pan");
    cout<<"Index of letter pan = "<<index_r<<endl;
    int never = username.find("NEVER");
    cout<<"Index of NEVER = "<<never<<endl;

    cout<<"\n---- Example 10: combinate methods"<<endl;
    // add string m in username before 123
    cout<<username<<endl;
    cout<<m<<endl;
    // find the index for 123
    int index123 = username.find("123");
    // add value of string m before from index123
    username.insert(username.find("123"), m);
    cout<<username<<endl;

    cout<<"\n---- EXCERCISE "<<endl;
    string new_word = "";
    cout<<"Enter a word: ";
    cin>>new_word;
    cout<<"The 4th character is: "<<new_word[3]<<endl;
    cout<<"The length of the word is: "<<new_word.length()<<" characters."<<endl;
    new_word.replace(1, 3, "--$--");
    cout<<new_word<<endl;
    int word = new_word.length();
    new_word.erase(word - 2);
    cout<<new_word<<endl;
    return 0;
}
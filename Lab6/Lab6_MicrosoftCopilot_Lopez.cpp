#include <iostream>
#include <string>
using namespace std;

int main() {
    string new_word;

    // Ask user for a word
    cout << "Type a word: ";
    cin >> new_word;

    // Print the 4th character (index 3)
    cout << "4th character: " << new_word[3] << endl;

    // Print the length of the word
    cout << "Length of the word: " << new_word.length() << endl;

    // Replace 3 characters starting from index 1 with "-- $ --"
    new_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << new_word << endl;

    // Remove last 2 characters
    new_word.erase(new_word.length() - 2, 2);
    cout << "After removing last 2 characters: " << new_word << endl;

    return 0;
}
// --- AI Assistant Used: Copilot ---
// Q1) Was the code correct? (Yes/No and explain your answer)Yes, Copilots did everything requested of it, including things like saving the users input and including comments.
// Q2) Was it readable and properly commented? explain your answer. Yes, Copilots's codes was really efficent using namespace instead of std::, it was readable and included comments.
// Q3) Were you able to explain each line of code? explain your answer. Yes, Copilot used methods and concepts that we went through in class or that i was able to decipher with a bit of critical thinking
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. Yes, Copilots used code that we went over in class line, .erase(), used to erase certian characters. Copilot used no unfimilar code.
//Enter a word: Asteria
//4th character: e
//Length of word: 7
//After replacement: A-- $ --ria
//After removing last 2 chars: A-- $ --r
#include <iostream>
#include <string>
 
int main() {
    std::string new_word;
 
    // 1. Ask user to type a word
    std::cout << "Enter a word: ";
    std::cin >> new_word;
 
    // 2. Print the 4th character (index 3)
    if (new_word.length() >= 4) {
        std::cout << "4th character: " << new_word[3] << std::endl;
    } else {
        std::cout << "Word is too short to have a 4th character." << std::endl;
    }
 
    // 3. Find and print the length of the word
    std::cout << "Length of word: " << new_word.length() << std::endl;
 
    // 4. Replace 3 characters starting from the 2nd character (index 1) with "-- $ --"
    new_word.replace(1, 3, "-- $ --");
    std::cout << "After replacement: " << new_word << std::endl;
 
    // 5. Remove two characters from the end
    if (new_word.length() >= 2) {
        new_word.erase(new_word.length() - 2, 2);
    }
    std::cout << "After removing last 2 chars: " << new_word << std::endl;
 
    return 0;
}
// --- AI Assistant Used: Copilot ---
// Q1) Was the code correct? (Yes/No and explain your answer)Yes, Claude did everything requested of it, including saving the users input.
// Q2) Was it readable and properly commented? explain your answer. Yes, while Claude's code wasnt the most efficent(std::) it was readable and included comments for each step of the way through.
// Q3) Were you able to explain each line of code? explain your answer. No, The only parts that gave me a bit of trouble were line's like line 26, as I am unsure why it added an If statement.
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. Yes, Claude used code that we went over in class line, .erase(), used to erase certian characters, but it also used if and else statments that we havent gone over yet.
// Q5) Terminal Output: (Paste the output of your program here)
//Enter a word: Asteria
//4th character: e
//Length of word: 7
//After replacement: A-- $ --ria
//After removing last 2 chars: A-- $ --r
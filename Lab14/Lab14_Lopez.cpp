/*
Claudio Lopez
June 11, 2026
Lab 14: 
*/
#include <iostream>
using namespace std;
int getValidMark(string subjectName) {
    int mark;
    do {
        cout << "Enter marks for " << subjectName << " (0-100): ";
        cin >> mark;
        if (mark < 0 || mark > 100) {
            cout << "Invalid input. Marks must be between 0 and 100.\n";
        }
    } while (mark < 0 || mark > 100);
    return mark;
}
int calculateTotal(int m1, int m2, int m3) {
    return m1 + m2 + m3;
}

double calculatePercentage(int m1, int m2, int m3) {
    int total = calculateTotal(m1, m2, m3);
    return (total / 300.0) * 100;
}
char determineGrade(double percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}
int main() {
    int mark1 = getValidMark("Subject 1");
    int mark2 = getValidMark("Subject 2");
    int mark3 = getValidMark("Subject 3");
    int total = calculateTotal(mark1, mark2, mark3);
    double percentage = calculatePercentage(mark1, mark2, mark3);
    char grade = determineGrade(percentage);
    cout << "\n----- Student Result -----\n";
    cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
    cout << "Total Marks: " << total << "/300" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Final Grade: " << grade << endl;
    return 0;
}

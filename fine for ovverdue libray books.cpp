
/*Authour: Alex Abere
Reg No.: BSCIT-05-0063/2024
Date:17/03/2025
Version 1*/
#include <iostream>
using namespace std;

int main() {
    int bookID, dueDate, returnDate;
    int daysOverdue, fineRate, fineAmount;

    // Get user inputs
    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (as an integer in DDMM format): ";
    cin >> dueDate;
    cout << "Enter Return Date (as an integer in DDMM format): ";
    cin >> returnDate;

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate
    if (daysOverdue <= 0) {
        fineRate = 0;
    } else if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display results
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate: " << fineRate << endl;
    cout << "Fine Amount: " << fineAmount << endl;

    return 0;
}
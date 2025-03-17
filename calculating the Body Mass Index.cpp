//c++ program to calculate the Body Mass Index (BMI) of a person and classify the BMI into categories.
/*Authour: Alex Abere
Reg No.: BSCIT-05-0063/2024
Date:17/03/2025
Version 1*/

#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // Prompt the user to enter weight and height
    cout << "Enter Weight (in kilograms): ";
    cin >> weight;
    cout << "Enter Height (in meters): ";
    cin >> height;

    // Calculate the BMI
    bmi = weight / (height * height);

    // Display the BMI
    cout << "Your BMI is: " << bmi << endl;

    // Classify the BMI
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
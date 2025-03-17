//program to chech whether a customer is eligible for loan
/*Authour: Alex Abere
Reg No.: BSCIT-05-0063/2024
Date:17/03/2025
Version 1*/

#include <iostream>
using namespace std;

bool isEligibleForLoan(int age,float income){
    //check if cust0mer meet the loan criteria
    return age >= 21 && income >= 21000;

}
int main() {
    int age;
    float annual_income;

    //input customer details
    cout << "Enter your age";
    cin >> age;
    cout << "Enter your annual income(sh): ";
    cin>> annual_income;

    //check eligibility
    if(isEligibleForLoan(age, annual_income)) {
        cout<< "congratulations, you quality for a loan."<< endl;
    
    }else {
        cout << "unfortunately, we are unable to offer you a loan at this time: ";
    }
    return 0;


}
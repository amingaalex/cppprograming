// Purpose: This program calculates the bonus of an employee based on the years of service.
/*Authour: Alex Abere
Reg No.: BSCIT-05-0063/2024
Date:17/03/2025
Version 1*/

#include <iostream>
using namespace std;

int main() {
    float salary, bonus;
    int years_of_service;

//prompt a user to enter salary and years of service
    cout<<"Enter your salary: ";
    cin>> salary;
    cout<<"Enter your years of service: ";
    cin>>years_of_service;
//compute bonus according to years of service
if(years_of_service > 10) {
    bonus = salary * 0.12;

}
else if(years_of_service >= 6 && years_of_service <= 10) {
    bonus = salary * 0.10;
}else {
    bonus = salary * 0.08;
}

//print the net bonus amount
cout<<"Your bonus amount is: "<<bonus<<endl;
return 0;
}
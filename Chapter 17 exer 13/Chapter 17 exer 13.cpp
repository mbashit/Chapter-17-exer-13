// Chapter 17 exer 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Gross pay depends on the pay rate and the total number of hours
worked per week. However, if someone works more than 40 hours, he
or she gets paid double for all hours worked over 40. Design a
flowchart and write the corresponding C++ program that lets the user
enter the pay rate and hours worked and then calculates and displays net
pay. Net pay is the amount of pay that is actually paid to the employee
after any deductions. Deductions include taxes, health insurance,
retirement plans, on so on. Assume a total deduction of 30% and that
the user enters valid values.*/

#include <iostream>
using namespace std;

int main()
{
    int hours_worked;
    double grosspay, payrate,Net_pay;

    cout << "enter the work hours: ";
    cin >>  hours_worked;
    cout << "enter the payrate: ";
    cin >> payrate;

    if (hours_worked > 40) {
        grosspay = payrate * 40 + 1.5 * payrate * (hours_worked - 40);
        Net_pay = grosspay - (0.3)*(grosspay);
        cout << "Net pay is : " << Net_pay << endl;
    }
    else {
        grosspay = hours_worked * payrate;
        Net_pay = grosspay - (0.3) * (grosspay);
        cout << "Net pay is: " << Net_pay << endl;
    }
    return 0;
}


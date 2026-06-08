#include <iostream>
#include <string>
using namespace std;

int ReadPostiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float TotalMonths(float loan_amount, float monthly_installment)
{
    return (float)loan_amount / monthly_installment;
}

int main()
{

    float loan_amount = ReadPostiveNumber("Please Enter a loan Amount? ");

    float monthly_installment = ReadPostiveNumber("Please Enter a Monthly Installment? ");

    cout << "\nTotal Months to pay = " << TotalMonths(loan_amount, monthly_installment);
    cout << endl;
    return 0;
}
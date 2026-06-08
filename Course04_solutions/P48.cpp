#include <iostream>
#include <string>
using namespace std;
float ReadPostiveNumber(string message)
{
    int num = 0;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}

float clacMonthlyInstallment(float loan_amount, int months)
{
    return (float)loan_amount / months;
}

int main()
{
    float loan_amount = ReadPostiveNumber("Please Enter a loan Amount?");

    float how_many_months = ReadPostiveNumber("How Many Months");

    cout << " \nMonthly installment = " << clacMonthlyInstallment(loan_amount, how_many_months);
    cout << endl;
    return 0;
}
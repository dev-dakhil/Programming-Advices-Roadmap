#include <iostream>
#include <string>
using namespace std;

double ReadNumber()
{
    double totalsales = 0;
    do
    {
        cout << "Please Enter Your total sales " << endl;
        cin >> totalsales;
    } while (totalsales < 0);
    return totalsales;
}

double GetComissionPercentage(double totalsales)
{
    if (totalsales >= 1000000)
    {
        return 0.01;
    }
    else if (totalsales >= 500000)
    {
        return 0.02;
    }
    else if (totalsales >= 100000)
    {
        return 0.03;
    }
    else if (totalsales >= 50000)
    {
        return 0.05;
    }
    else
    {
        return 0.00;
    }
}

double calc_totalComission(double totalsales)
{
    return GetComissionPercentage(totalsales) * totalsales;
}
int main()
{
    double totalsales = ReadNumber();
    cout << endl
         << "Comission = " << GetComissionPercentage(totalsales) * 100 << "% " << endl;
    cout << endl
         << " total Comission = " << calc_totalComission(totalsales) << endl;

    return 0;
}
لا
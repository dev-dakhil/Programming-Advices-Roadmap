#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{
    float number = 0;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

float CalcPiadBack(float totalbill, float cashpaid)
{
    float cashremainder = cashpaid - totalbill;
    return cashremainder;
}
int main()
{
    float totalbill = ReadNumber("Please Enter a total Pill ");
    float cashpaid = ReadNumber("Please Enter a cash Paid ");
    cout << endl;
    cout << "Total Pill is " << totalbill << endl;
    cout << "Cash Paid is " << cashpaid << endl;
    cout << "*********************\n";

   cout << "Remainder = " << CalcPiadBack(totalbill, cashpaid);

    return 0;
}
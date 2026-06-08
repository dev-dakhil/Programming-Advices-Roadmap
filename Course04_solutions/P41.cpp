// why we do casting in this example

#include <iostream>
#include <string>
using namespace std;

float ReadPostiveNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

float HoursToDays(float numberofhours)
{
    return (float)numberofhours / 24;
}

float HoursToWeaks(float numberofhours)
{
    return (float)numberofhours / 24 / 7;
}

float DaysToWeeks(int numberofdays)
{
    return (float)numberofdays / 7;
}

int main()
{
    float numberofhours = ReadPostiveNumber("Please Enter a number of hours");
    float numberofdays = HoursToDays(numberofhours);
    cout << "Total of hours = " << numberofhours << endl;
    cout << "Total Of days = " << numberofdays << endl;
    cout << "Total Of Weeks = " << HoursToWeaks(numberofhours) << endl;

    return 0;
}
// write program the print ceil of number
#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float num = 0;
    cout << "Please Enter a number ";
    cin >> num;
    return num;
}
float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyCeil(float number)
{ // -10.3
    if (abs(GetFractionPart(number)) > 0)
    {
        return (int)number + 1;
    }
    else
    {
        return (int)number;
    }

    return number;
}

int main()
{

    float number = ReadNumber();
    cout << "C++ ceil Result: " << ceil(number) << endl;
    cout << "My ceil Result: " << MyCeil(number) << endl;

    return 0;
}
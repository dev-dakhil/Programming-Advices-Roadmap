#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float diameter;
    cout << " Enter a diameter vlue " << endl;
    cin >> diameter;
    return diameter;
}
float ClacCircleAreaByDiameter(float clacdiameter)
{
    const float pi = 3.141592653589793238;
    clacdiameter = (pi * (pow(clacdiameter, 2))) / 4;
    return clacdiameter;
}

void PrintResultOfClacdiameter(float Result)
{
    cout << "Circle Area = " << Result << endl;
}
int main()
{

    PrintResultOfClacdiameter(ClacCircleAreaByDiameter(ReadDiameter()));

    return 0;
}
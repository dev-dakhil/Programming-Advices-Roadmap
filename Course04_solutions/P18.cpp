#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float Readradius()
{
    float radius;
    cout << " Enter a radius Please" << endl;
    cin >> radius;

    return radius;
}
float CirclArea(float radius)
{
    float area;
    const float pi = 3.141592653589793238;
    area = pi * pow(radius, 2);

    return area;
}
void PrintResultOfCirclArea(float area)
{
    cout << "Area = " << area << endl;
}

int main()
{
    PrintResultOfCirclArea(CirclArea(Readradius()));
    return 0;
}
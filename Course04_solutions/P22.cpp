#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void ReadTriangleData(float &sidelength, float &baselength)
{

    cout << "Enter side length of the isosceles triangle." << endl;
    cin >> sidelength;
    cout << "Enter base of the triangle. " << endl;
    cin >> baselength;
}
float CalcCircleAreaByITriangle(float sidelength, float baselength)
{
    const float pi = 3.141592653589793238;
    float area = (pi) * ((pow(baselength, 2) / 4) * ((2 * sidelength) - baselength) / ((2 * sidelength) + baselength));
    return area;
}

void PrintResult(float area)
{
    cout << "area = " << area << endl;
}

int main()
{
    float sidelength, baselength;
    ReadTriangleData(sidelength, baselength);
    PrintResult(CalcCircleAreaByITriangle(sidelength, baselength));

    return 0;
}
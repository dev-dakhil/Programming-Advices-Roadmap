#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void ReadTriangleData(float &a, float &b, float &c)
{
    cout << " Enter a Side Length area " << endl;
    cin >> a;
    cout << " Enter b Side Length area " << endl;
    cin >> b;
    cout << " Enter c Side Length area " << endl;
    cin >> c;
}
float CalcCircleAreaByATriangle(float a, float b, float c)
{
    float p = ((a + b + c) / 2);
    float t = ((a) * (b) * (c) / ((4) * (sqrt((p) * (p - a) * (p - b) * (p - c)))));
    float pi = 3.141592653589793238;
    float area = (pi * (pow(t, 2)));
    return area;
}

void PrintResult(float area)
{
    cout << "The area = " << area << endl;
}
int main()
{
    float a, b, c;

    ReadTriangleData(a, b, c);
    PrintResult(CalcCircleAreaByATriangle(a, b, c));

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float &base, float &height)
{
    cout << " Enter a base Number " << endl;
    cin >> base;
    cout << " Enter a height Number " << endl;
    cin >> height;
}

float CalcTriangleArea(float base, float height)
{
    float area = (base / 2) * height;

    return area;
}

void PrintResult(float area)
{
    cout << "Triangle Area = " << area << endl;
}
int main()
{

    float base, height;
    ReadNumbers(base, height);
    PrintResult(CalcTriangleArea(base, height));

    return 0;
}
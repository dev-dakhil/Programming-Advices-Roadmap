#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// Poblem is Clac Circle  Area along the Circumference

float ReadCircumference()
{
    float Circumference;
    cout << " Enter a Circumference " << endl;
    cin >> Circumference;
    return Circumference;
}

double CalcCircumferenceArea(float Circumference)
{
    const double pi = 3.141592653589793238;
    double area = pow(Circumference, 2) / (4 * pi);

    return area;
}

void PrintResult(double area)
{
    cout << "Circle Area = " << area << endl;
}

int main()
{
    PrintResult(CalcCircumferenceArea(ReadCircumference()));

    return 0;
}
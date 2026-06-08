#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void ReadNumbers(float &a, float &d)
{
    cout << "Please Enter a on side A " << endl;
    cin >> a;
    cout << "Please Enter a diagonal of a rectangle " << endl;
    cin >> d;
}
float RectangleAreaBySideAndDiagonal(float a, float d)
{
    float area = a * (sqrt((pow(d, 2) - pow(a, 2))));
    return area;
}
void PrintResult(float Result)
{
    cout << "Circle Area = " << Result << endl;
}
int main()
{
    float a, d = 0;
    ReadNumbers(a, d);
    PrintResult(RectangleAreaBySideAndDiagonal(a, d));
    
    return 0;
}
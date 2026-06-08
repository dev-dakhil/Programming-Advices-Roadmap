#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadSquareSide()
{
    float squareside;
    cout << " please Enter a SquareSide Number " << endl;
    cin >> squareside;
    return squareside;
}
float CalcCircleAreaInscribedInSquare(float squareside)
{
    const float pi = 3.141592653589793238;

    float Clacsquareside = (pi * (pow(squareside, 2))) / 4;

    return Clacsquareside;
}

void PrintResult(float Clacsquareside)
{
    cout << "Circle Area " << Clacsquareside << endl;
}

int main()
{
    PrintResult(CalcCircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}
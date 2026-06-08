#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &num1, int &num2, int &num3)
{
    cout << " Enter a Number 1 " << endl;
    cin >> num1;
    cout << " Enter a Number 2 " << endl;
    cin >> num2;
    cout << " Enter a Number 3 " << endl;
    cin >> num3;
}
int SumOf3Numbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

float CalculateAverage(int num1, int num2, int num3)
{
    return (float)SumOf3Numbers(num1, num2, num3) / 3;
}
void PrintResults(float avg)
{
    cout << "\n The Average " << avg << endl;
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    ReadNumbers(num1, num2, num3);

    PrintResults(CalculateAverage(num1, num2, num3));

    return 0;
}
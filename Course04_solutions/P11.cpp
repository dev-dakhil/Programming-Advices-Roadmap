#include <iostream>
#include <string>
using namespace std;
enum enpassfail
{
    pass = 1,
    fail = 2
};
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

enpassfail checkavg(float avg)
{

    if (avg >= 50)
    {
        return enpassfail::pass;
    }
    else
    {
        return enpassfail::fail;
    }
}

void PrintResults(float avg)
{
    if (checkavg(avg) == enpassfail::pass)
    {

        cout << " Pass " << endl;
    }
    else
    {
        cout << " Fail" << endl;
    }
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    ReadNumbers(num1, num2, num3);
    PrintResults(CalculateAverage(num1, num2, num3));

    return 0;
}
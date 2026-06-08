#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int num = 0;
    cout << " Enter a Number to the half of it " << endl;
    cin >> num;
    return num;
}

float CalculatHalfNumber(int num)
{

    return (float)num / 2;
}

void PrintResult(int num)
{

    cout << "half of " << to_string(num) << " is  " << CalculatHalfNumber(num);
}

int main()
{

    PrintResult(ReadNumber());

    return 0;
}

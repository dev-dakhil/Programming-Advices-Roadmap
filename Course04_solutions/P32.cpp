#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int num = 0;
    cout << " Enter your number that you want to Power it " << endl;
    cin >> num;

    return num;
}

int ReadPowerOfNumber()
{
    int power = 0;
    cout << " Enter your Power Number " << endl;
    cin >> power;

    return power;
}

int PowerOfM(int num, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int p = 1;
    for (int i = 1; i <= power; i++)
    {
        p = p * num;
    }
    return p;
}

int main()
{
    cout << PowerOfM(ReadNumber(), ReadPowerOfNumber());
    return 0;
}
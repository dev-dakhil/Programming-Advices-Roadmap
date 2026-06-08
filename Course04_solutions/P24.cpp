#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge()
{
    int age = 0;
    cout << "Enter your age please " << endl;
    cin >> age;
    return age;
}

bool ValidateNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

void PrintResult(int age)
{

    if (ValidateNumberInRange(age, 18, 45))
    {
        cout << age << " is valid age" << endl;
    }
    else
    {
        cout << age << " is invalid age " << endl;
    }
}

int main()
{

    PrintResult(ReadAge());

    return 0;
}
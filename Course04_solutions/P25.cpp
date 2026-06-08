#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// problem is read until user Enter a age between 18 - 45
int ReadAge()
{
    int age;
    cout << "Enter your age please " << endl;
    cin >> age;
    return age;
}
bool ValidateAgeInNumber(int number, int from, int to)
{
    return (number >= from && number <= to);
}

int ReadAgeBetween(int from, int to)
{
    int age;
    do
    {
        age = ReadAge();

    } while (!ValidateAgeInNumber(age, 18, 45));
    return age;
}

void PrintResult(int age)
{
    cout << "your age = " << age << " is valid" << endl;
}
int main()
{

    PrintResult(ReadAgeBetween(18, 45));

    return 0;
}
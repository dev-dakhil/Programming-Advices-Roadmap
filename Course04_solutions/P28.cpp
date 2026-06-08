#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOddOrEven
{
    even = 2,
    odd = 1
};

int ReadNumberFromTheUser()
{
    int num = 0;
    cout << "Enter the number Please " << endl;
    cin >> num;

    return num;
}

enOddOrEven CheckEvenOddNumber(int num)
{
    if (num % 2 != 0)
    {
        return enOddOrEven::odd;
    }
    else
    {
        return enOddOrEven::even;
    }
}
void SumOddNumbersFrom1ToN_UsingWhile(int num)
{
    int counter = 1;
    int sum = 0;

    cout << " Sum Odd numbers using while = " << endl;

    while (num >= counter)
    {
        if (CheckEvenOddNumber(counter) == enOddOrEven::odd)
        {
            sum += counter;
        }
        counter++;
    }
    cout << sum << endl;
}
void SumOddNumbersFrom1ToN_UsingDoWhile(int num)
{
    int counter = 0;
    int sum = 0;
    cout << "Sum Odd Number using do while = " << endl;
    do
    {
        counter++;
        if (CheckEvenOddNumber(counter) == enOddOrEven::odd)
        {
            sum += counter;
        }
    } while (num > counter);
    cout << sum << endl;
}
void SumOddNumbersFrom1ToN_UsingForLoop(int num)
{
    cout << "The sum using For Loop is = " << endl;
    int sum = 0;
    for (int counter = 1; num >= counter; counter++)
    {
        if (CheckEvenOddNumber(counter) == enOddOrEven::odd)
        {
            sum += counter;
        }
    }
    cout << sum << endl;
}

int main()
{
    int N;
    N = ReadNumberFromTheUser();
    SumOddNumbersFrom1ToN_UsingWhile(N);
    SumOddNumbersFrom1ToN_UsingDoWhile(N);
    SumOddNumbersFrom1ToN_UsingForLoop(N);
    return 0;
}
// print all prime number from one to N
#include <iostream>
using namespace std;

enum PrimeOrNotPrime
{
    Prime = 1,
    NotPrime = 2
};

int ReadPostiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

PrimeOrNotPrime CheckPrimeNotPrime(int number)
{
    if (number < 2) return PrimeOrNotPrime::NotPrime;
    int M = number / 2;

    for (int i = 2; i <= M; i++)
    {
        if (number % i == 0)
        {
            return PrimeOrNotPrime::NotPrime;
        }
    }
    return PrimeOrNotPrime::Prime;
}

void PrintPrimeOrNotPrimeFrom2ToN(int number)
{
    cout << endl;

    cout << "Prime Number from " << 1 << " to" << number;
    cout << "are : " << endl;

    for (int i = 1; i <= number; i++)
    {
        if (CheckPrimeNotPrime(i) == PrimeOrNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPrimeOrNotPrimeFrom2ToN(ReadPostiveNumber("Please Enter a Postive Number "));

    return 0;
}
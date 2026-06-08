#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimeNotPrime
{
    prime = 1,
    notprime = 2
};

float ReadPostive(string messege)
{
    float num = 0;
    do
    {
        cout << messege << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}

enPrimeNotPrime CheckPostiveNumber(int num)
{
    if (num < 2)
        return enPrimeNotPrime::prime;

    float M = round(num / 2);

    for (int counter = 2; M >= counter; counter++)
    {
        if (num % counter == 0)
        {
            return enPrimeNotPrime::notprime;
        }
    }
    return enPrimeNotPrime::prime;
}

void PrintPrimeOrNot(int num)
{
    switch (CheckPostiveNumber(num))
    {
    case enPrimeNotPrime::prime:
        cout << "Your Number is Prime " << endl;
        break;

    case enPrimeNotPrime::notprime:
        cout << "Your Number is not Prime " << endl;
        break;
    }
}
int main()
{
    PrintPrimeOrNot(ReadPostive("Please Enter a postive Number "));

    return 0;
}
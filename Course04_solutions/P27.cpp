#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
    int N;
    cout << " Enter a number for countdown " << endl;
    cin >> N;

    return N;
}
void PrintCountdownNumberBetweenRangeUsingWhile(int N)
{
    cout << " here while " << endl;
    int counter = N;
    while (counter >= 1)
    {
        cout << counter << endl;
        counter--;
    }
}

void PrintCountdownNumberBetweenRangeUsingDowhile(int N)
{
    int counter = N;
    cout << " here Do-while " << endl;
    do
    {
        cout << counter << endl;
        counter--;
    } while (counter >= 1);
}

void PrintCountdownNumberBetweenRangeUsingFor(int N)
{
    cout << " here For loop " << endl;

    for (int i = N; 1 <= i; i--)
    {
        cout << i << endl;
    }
}
int main()
{
    int N;
    N = ReadNumber();

    PrintCountdownNumberBetweenRangeUsingWhile(N);
    PrintCountdownNumberBetweenRangeUsingDowhile(N);
    PrintCountdownNumberBetweenRangeUsingFor(N);

    return 0;
}
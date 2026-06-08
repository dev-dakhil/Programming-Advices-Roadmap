#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadNumber()
{
    int N;
    cout << " Enter a Number to start from 0 to N " << endl;
    cin >> N;

    return N;
}
void PrintFrom0ToNUsingWhile(int N)
{
    int i = 1;
    while (i <= N)
    {
        cout << i << endl;
        i++;
    }
}
void PrintFrom0ToNUsingDowhile(int N)
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= N);
}

void PrintFrom0ToNUsingfor(int N)
{
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int N;
    N = ReadNumber();
    PrintFrom0ToNUsingWhile(N);
    PrintFrom0ToNUsingDowhile(N);
    PrintFrom0ToNUsingfor(N);
    return 0;
}
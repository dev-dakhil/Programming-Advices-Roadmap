#include <iostream>
#include <string>
using namespace std;

int ReadPositveNumber(string messege)
{
    int N;
    do
    {
        cout << messege << endl;
        cin >> N;
    } while (N < 0);

    return N;
}

int clacfactorialNumber(int N)
{
    int f = 1;
    for (int i = N; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    cout << clacfactorialNumber(ReadPositveNumber("Enter a positve number please "));

    return 0;
}
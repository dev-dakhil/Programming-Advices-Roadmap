#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string messaege)
{
    float num = 0;
    cout << messaege << endl;
    cin >> num;

    return num;
}

float SumNumbers()
{
    float num, sum = 0;
    int i = 1;

    do
    {
        num = ReadNumber(" Please Enter your number " + to_string(i));

        if (num == -99)
        {
            break;
        }
        i++;
        sum += num;

    } while (num != -99);

    return sum;
}
int main()
{
    cout << "\n " << "Result is = " << SumNumbers();

    return 0;
}
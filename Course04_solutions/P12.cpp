#include <iostream>
#include <string>

using namespace std;
void Read2Numbers(int &num1, int &num2)
{
    cout << "Enter a number 1 ?" << endl;
    cin >> num1;
    cout << " Enter a number 2 ?" << endl;
    cin >> num2;
}
int Max2Numbers(int num1, int num2)
{
    if (num1 > num2)
    {

        return num1;
    }
    else
    {
        return num2;
    }
}

void PrintResults(int MaxNumber)
{
    cout << " The Maximum Number is " << MaxNumber << endl;
}

int main()
{
    int num1, num2;
    Read2Numbers(num1, num2);
    PrintResults(Max2Numbers(num1, num2));

    return 0;
}
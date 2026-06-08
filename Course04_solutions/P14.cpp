#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &num1, int &num2)
{
    cout << " Enter a number 1 ?" << endl;
    cin >> num1;
    cout << " Enter a number 2 ?" << endl;
    cin >> num2;
}

void SwapNumbers(int &num1, int &num2)
{
    int tamp = num1;
    num1 = num2;
    num2 = tamp;
}

void PrintResult(int num1, int num2)
{
    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;
}

int main()
{
    int num1, num2;
    ReadNumbers(num1, num2);
    PrintResult(num1, num2);
    SwapNumbers(num1, num2);
    PrintResult(num1, num2);

    return 0;
}
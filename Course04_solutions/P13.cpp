#include <iostream>
#include <string>
using namespace std;
void Read3Numbers(int &num1, int &num2, int &num3)
{
    cout << " Enter a number 1 ?" << endl;
    cin >> num1;
    cout << " Enter a number 2 ?" << endl;
    cin >> num2;
    cout << " Enter a number 3 ?" << endl;
    cin >> num3;
}

int MaxOf3Numbers(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 >= num3)
        {
            return num1;
        }
    else
    {
        return num3;
    }
    }

    if (num2 > num1)
    {
        if (num2 >= num3)
        {
            return num2;
        }

        else
        {
            return num3;
        }
    }
}

void PrintResult(int Max)
{
    cout << "The Max Number is " << Max << endl;
}

int main()
{
    int num1, num2, num3;

    Read3Numbers(num1, num2, num3);
    PrintResult(MaxOf3Numbers(num1, num2, num3));

    return 0;
}
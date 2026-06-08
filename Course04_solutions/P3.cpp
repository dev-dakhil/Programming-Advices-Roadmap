#include <iostream>
#include <string>
using namespace std;

enum enNumberSign
{
    zero = 0,
    negative = 1,
    postive = 2
};

int readUserInput()
{
    int num = 0;
    cout << " Please enter a number?" << endl;
    cin >> num;

    return num;
}

enNumberSign checkUserType(int num)
{
    int result = num;
    if (result < 0)
    {
        return negative;
    }
    else if (result == 0)
    {
        return zero;
    }
    else
    {
        return postive;
    }
}

void printNumbertype(int num)
{
    if (num == negative)
    {
        cout << endl
             << "Your number is negative" << endl;
    }
    else if (num == zero)
    {
        cout << endl
             << "Your number is zero" << endl;
    }
    else
    {
        cout << endl
             << "Your number is postive" << endl;
    }
}
int main()
{

    printNumbertype(checkUserType(readUserInput()));

    return 0;
}
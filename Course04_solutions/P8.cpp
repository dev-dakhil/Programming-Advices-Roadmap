#include <iostream>
#include <string>
using namespace std;
enum enCheckPassFail
{
    pass = 1,
    fail = 2
};

int ReadGrads()
{
    int grads = 0;
    cout << " Please Enter your Grads " << endl;
    cin >> grads;
    return grads;
}

enCheckPassFail CheckPassFail(int grads)
{
    if (grads >= 50)
    {
        return enCheckPassFail::pass;
    }
    else
    {
        return enCheckPassFail::fail;
    }
}

void PrintResult(enCheckPassFail grads)
{
    if (enCheckPassFail(grads) == enCheckPassFail::pass)
    {
        cout << "\t Pass " << endl;
    }
    else if (enCheckPassFail(grads) == enCheckPassFail::fail)
    {
        cout << "\t Fail" << endl;
    }
}

int main()
{
    PrintResult(CheckPassFail(ReadGrads()));
    return 0;
}
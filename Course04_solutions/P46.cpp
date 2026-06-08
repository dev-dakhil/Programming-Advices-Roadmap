#include <iostream>
#include <string>
using namespace std;

void PrintFromAtoZ()
{

    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}
int main()
{
    PrintFromAtoZ();

    return 0;
}
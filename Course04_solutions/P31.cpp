#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int num = 0;
    cout << " \nPlease Enter a Number\n " << endl;
    cin >> num;

    return num;
}
void Powerof_2_3_4(int num)
{
    int powerof2 = num * num;
    int powerof3 = num * num * num;
    int powerof4 = num * num * num * num;

    cout << powerof2 << " " << powerof3 << " " << powerof4 << endl;
}
int main()
{

    Powerof_2_3_4(ReadNumber());
    return 0;
}
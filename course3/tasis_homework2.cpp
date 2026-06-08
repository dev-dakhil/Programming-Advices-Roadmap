#include <iostream>
using namespace std;

struct strEmployee
{
    int id;
    string name;
    double salery;
};
int main()
{

    strEmployee Employee[3];

    cout << " Enter YOU'R ID for Employee1: " << endl;
    cin >> Employee[0].id;
    cout << " Enter YOU'R Name for Employee1: " << endl;
    cin >> Employee[0].name;
    cout << " Enter YOU'R salery for Employee1: " << endl;
    cin >> Employee[0].salery;

    cout << " Enter YOU'R ID for Employee2: " << endl;
    cin >> Employee[1].id;
    cout << " Enter YOU'R Name for Employee2: " << endl;
    cin >> Employee[1].name;
    cout << " Enter YOU'R salery for Employee2: " << endl;
    cin >> Employee[1].salery;

    cout << "Id E1: " << Employee[0].id << endl;
    cout << "Name E1: " << Employee[0].name << endl;
    cout << "salery E1: " << Employee[0].salery << endl;
    cout << "**************************" << endl;
    cout << "Id E2: " << Employee[1].id << endl;
    cout << "Name E2: " << Employee[1].name << endl;
    cout << "salery E2: " << Employee[1].salery << endl;

    return 0;
}
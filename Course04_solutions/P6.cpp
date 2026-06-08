#include <iostream>
#include <string>
using namespace std;

struct Info
{
    string firstName;
    string lastName;
};

Info ReadInfo()
{
    Info personinfo;
    cout << "Enter your first name " << endl;
    cin >> personinfo.firstName;
    cout << "Enter your last name " << endl;
    cin >> personinfo.lastName;

    return personinfo;
}

string getFullName(Info personinfo, bool reversed)
{
    string fullName = "";
    if (reversed)
    {
        fullName = personinfo.lastName + " " + personinfo.firstName;
    }
    else
    {

        fullName = personinfo.firstName + " " + personinfo.lastName;
    }

    return fullName;
}

void PrintFullName(string fullName)
{
    cout << "Your Full Name is " << fullName << endl;
}

int main()
{
    PrintFullName(getFullName(ReadInfo(), true));

    return 0;
}
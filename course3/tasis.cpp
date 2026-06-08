#include <iostream>
using namespace std;
enum enMaritalStatus
{
    Single,
    Married
};
struct strid
{
    string name;
    unsigned short int age;
    string sity;
    string country;
    float monthly_salry;
    double yearly_salry;
    string gender;
    enMaritalStatus married;
    double address;
};

void readInfo(strid &info)
{
    cout << "your name: " << endl;
    cin >> info.name;
    cout << "age:" << endl;
    cin >> info.age;
    cout << "sity: " << endl;
    cin >> info.sity;
    cout << "country: " << endl;
    cin >> info.country;
    cout << "monthly_salry: " << endl;
    cin >> info.monthly_salry;
    cout << "yearly_salry: " << endl;
    cin >> info.yearly_salry;
    cout << "gender: " << endl;
    cin >> info.gender;
    cout << "Are you married? (1 for Yes, 0 for No): " << endl;
    int choice;
    cin >> choice;
    info.married = enMaritalStatus(choice);
    cout << "address: " << endl;
    cin >> info.address;
}

void printInfo(strid info)
{
    cout << "*******************" << endl;
    cout << "your name: " << info.name << endl;
    cout << "age:" << info.age << endl;
    cout << "sity: " << info.sity << endl;
    cout << "country: " << info.country << endl;
    cout << "monthly_salry: " << info.monthly_salry << endl;
    cout << "yearly_salry: " << info.yearly_salry << endl;
    cout << "gender:  " << info.gender << endl;
    cout << "Married: ";
    if (info.married == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    cout << "address: " << info.address << endl;
    cout << "*******************" << endl;
}

int main()
{
    strid person;
    readInfo(person);
    printInfo(person);

    return 0;
}
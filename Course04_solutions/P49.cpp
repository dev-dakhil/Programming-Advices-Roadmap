#include <iostream>
#include <string>
using namespace std;
string ReadPINCode()
{
    string pincode;
        cout << "Please Enter a PIN Code " << endl;
        cin >> pincode;
    return pincode;
}

bool login()
{
    string pincode;
    do{
    pincode = ReadPINCode();
    if (pincode == "1234")
    {
        return true;
    }
    else
    {
        cout << "Wrong Number ";
        system("color 4F");
    }
    }while (pincode != "1234");
    return false;
}

int main()
{
    if (login())
    {
        system("color 2F");
        cout << "Your Balance is " << 7500 << endl;
    }

    return 0;
}
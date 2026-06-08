#include <iostream>
#include <string>

using namespace std;

struct stPiggyBankContenet
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
    stPiggyBankContenet ReadPiggyBankContenet1;
    cout << " \n Enter your Pennies Please " << endl;
    cin >> ReadPiggyBankContenet1.Pennies;
    cout << " \n Enter your Nickels Please " << endl;
    cin >> ReadPiggyBankContenet1.Nickels;
    cout << " \n Enter your Dimes Please " << endl;
    cin >> ReadPiggyBankContenet1.Dimes;
    cout << " \n Enter your Quarters Please " << endl;
    cin >> ReadPiggyBankContenet1.Quarters;
    cout << " \n Enter your Dollars Please " << endl;
    cin >> ReadPiggyBankContenet1.Dollars;

    return ReadPiggyBankContenet1;
}
int CalculateTotalPennies(stPiggyBankContenet ReadPiggyBankContenet1)
{
    int totalPennies = 0;
    totalPennies = ReadPiggyBankContenet1.Pennies * 1 + ReadPiggyBankContenet1.Nickels * 5 + ReadPiggyBankContenet1.Dimes * 10 + ReadPiggyBankContenet1.Quarters * 25 + ReadPiggyBankContenet1.Dollars * 100;
    return totalPennies;
}

int main()
{
    int totalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
    cout << "/n total Pennies " << totalPennies << endl;
    cout << " /n Total Dolars " << (float)totalPennies / 100;

    return 0;
}
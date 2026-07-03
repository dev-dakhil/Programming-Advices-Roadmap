#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int from, int to)
{
    int randomnumber = rand() % (to - from + 1) + from;

    return randomnumber;
}

enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    Digit = 3,
    SpecialCharacter = 4
};

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
    {
        return char(RandomNumber(97, 122));
    }
    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
    }
    case enCharType::SpecialCharacter:
    {
        return char(RandomNumber(33, 47));
    }
    default:
        cout << "Enter a valid value";
        return '\0';
    }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;

    return 0;
}
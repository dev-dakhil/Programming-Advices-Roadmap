#include <iostream>
using namespace std;

struct stinfo
{
    int age;
    bool havedrivinglicense;
    bool haveRecommendation;
};

stinfo ReadInfo()
{

    stinfo info;

    cout << "Do you have Recommendation (1-for yes 0-for no) " << endl;
    cin >> info.haveRecommendation;

    cout << "Enter your age please " << endl;
    cin >> info.age;

    cout << "Do you have drive license(1-for yes 0-for no)" << endl;
    cin >> info.havedrivinglicense;

    return info;
}

bool checkInfo(stinfo info)
{
    if (info.haveRecommendation)
    {
        return true;
    }

    else
    {
        return (info.havedrivinglicense && info.age > 21);
    }
}

void PrintResult(stinfo info)
{

    if (checkInfo(info) == true)
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()
{

    PrintResult(ReadInfo());

    return 0;
}
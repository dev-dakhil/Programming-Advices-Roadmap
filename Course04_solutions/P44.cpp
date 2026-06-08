#include <iostream>
#include <string>

using namespace std;

enum enDaysofweek
{
    sun = 2,
    mon = 3,
    tue = 4,
    wed = 5,
    thu = 6,
    fri = 7,
    sat = 1
};

int ReadPostiveNumberInRange(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

enDaysofweek ReadDaysOfWeek()
{
    return (enDaysofweek)ReadPostiveNumberInRange("Enter a number of Day (1-Sat 2-Sun 3-Mon 4-Tue 5-Wed 6-Thu 7-fri) ", 1, 7);
}

string PrintDayOfweek(enDaysofweek DayOfWeek)
{
    switch (DayOfWeek)
    {
    case enDaysofweek::sat:
        return "Saturday";
    case enDaysofweek::sun:
        return "Sunday";
    case enDaysofweek::mon:
        return "Monday";
    case enDaysofweek::tue:
        return "Thuesday";
    case enDaysofweek::wed:
        return "Wednesday";
    case enDaysofweek::thu:
        return "Thursday";
    case enDaysofweek::fri:
        return "Friday";

    default:
        return "Not a valid day ";
    }
}

int main()
{

    cout << PrintDayOfweek(ReadDaysOfWeek());

    return 0;
}
#include <iostream>
#include <string>
using namespace std;
enum MonthsOfTheYear
{
    jan = 1,
    feb = 2,
    mar = 3,
    apr = 4,
    may = 5,
    jun = 6,
    jul = 7,
    aug = 8,
    sep = 9,
    oct = 10,
    nov = 11,
    dec = 12
};

int ReadNumberInRange(string message, int from, int to)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

MonthsOfTheYear GetMonthOfYear()
{
    return (MonthsOfTheYear)ReadNumberInRange(" \t \t Please Enter a month \n ( 1-january 2-February 3-march 4-april 5-May 6-Jun 7-July 8-August 9-September 10-October 11-November 12-December)", 1, 12);
}

string PrintMonthOnscreen(MonthsOfTheYear ChosenMonthFromGetMonthOfYear)
{
    switch (ChosenMonthFromGetMonthOfYear)
    {
    case MonthsOfTheYear::jan:
        return "january";
    case MonthsOfTheYear::feb:
        return "February";
    case MonthsOfTheYear::mar:
        return "March";
    case MonthsOfTheYear::apr:
        return "April";
    case MonthsOfTheYear::may:
        return "May";
    case MonthsOfTheYear::jun:
        return "Jun";
    case MonthsOfTheYear::jul:
        return "July";
    case MonthsOfTheYear::aug:
        return "August";
    case MonthsOfTheYear::sep:
        return "September";
    case MonthsOfTheYear::oct:
        return "October";
    case MonthsOfTheYear::nov:
        return "November";
    case MonthsOfTheYear::dec:
        return "December";

    default:
        cout << "Thats not a valid number ";
    }
}

int main()
{
    cout << PrintMonthOnscreen(GetMonthOfYear());

            return 0;
}
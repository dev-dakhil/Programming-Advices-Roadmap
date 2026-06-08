#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strTimeComponents
{
    int second, minute, hour, days;
};

float ReadPostiveNumber(string message)
{
    float num = 0;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);

    return num;
}

strTimeComponents ConvertSecondsToDuration(int TotalSeconds)
{

    strTimeComponents TaskDuration;

    const int SecondPerDays = 24 * 60 * 60;
    const int SecondPerHours = 60 * 60;
    const int SecondPerMinuts = 60;
   
   int remainder = 0;

   TaskDuration.days = floor(TotalSeconds / SecondPerDays);
   remainder = TotalSeconds % SecondPerDays;
   
   TaskDuration.hour = floor(remainder / SecondPerHours);
   remainder = remainder % SecondPerHours ;
   
   TaskDuration.minute = floor(remainder / SecondPerMinuts);
   remainder = remainder % SecondPerMinuts;
    
    TaskDuration.second = remainder;

    return TaskDuration;


}

void PrintTaskDurationDetails(strTimeComponents ConvertedSecondsToDuration){

    cout <<ConvertedSecondsToDuration.days << ":"
     << ConvertedSecondsToDuration.hour << ":"
      << ConvertedSecondsToDuration.minute << ":"
      << ConvertedSecondsToDuration.second<< endl;
}



int main() 
{

    int toatalseconds = ReadPostiveNumber("Please Enter Your Total seconds ?");
    PrintTaskDurationDetails(ConvertSecondsToDuration(toatalseconds));


        return 0;
}

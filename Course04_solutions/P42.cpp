#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string message){
    int num = 0;
    do{
     cout <<  message << endl;
     cin >> num;
    }while(num <= 0);

    return num;
}

struct strTimeComponents{
    int days;
    int hours;
    int minutes;
    int seconds;
};

strTimeComponents ReadTaskDuration(){
    strTimeComponents Time;
    Time.days = ReadNumber("Enter a number of days");
    Time.hours = ReadNumber("Enter a number of hours");
    Time.minutes = ReadNumber("Enter a number of minutes");
    Time.seconds = ReadNumber("Enter a number of seconds");

    return Time;
}

double TotalSecondsCalculate (strTimeComponents TaskDuration){
    int TaskDurationInSeconds = 0;
   TaskDurationInSeconds = TaskDuration.days * 24 * 60 * 60 ;
   TaskDurationInSeconds += TaskDuration.hours * 60 * 60 ;
   TaskDurationInSeconds += TaskDuration.minutes * 60 ;
   TaskDurationInSeconds += TaskDuration.seconds;

return TaskDurationInSeconds;
}




int main (){

cout << "Result " << TotalSecondsCalculate(ReadTaskDuration());
cout << endl;



    return 0;
}
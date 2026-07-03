#include <iostream>
using namespace std;
// write a program read a digit and a number .
//  and looking for number that the user looking the freq of it  then print digit frequency in that number

int ReadPostiveNumber(string message)
{
    int num = 0;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num < 0);

    return num;
}



int CountDigitFrequency(int number , short int digit_to_check)
{
    int lastdigit = 0;
    int sum_freq_number = 0;
    while (number > 0)
    {
        lastdigit = number % 10; // 1223222
        number = number / 10;
        if (digit_to_check == lastdigit){
            sum_freq_number++;
        }
    }
    return sum_freq_number;
}

int main()
{
   int number = ReadPostiveNumber("Please enter the main number?");
   short digit_to_check = ReadPostiveNumber("Please enter one digit to check");

   cout << "Number " << digit_to_check << " Frequency is " << CountDigitFrequency(number , digit_to_check) << " Time(s).\n";
    return 0;
}
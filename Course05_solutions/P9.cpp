#include <iostream>
using namespace std;
// write a program that count frequancy of digits in whole number and 
// print number that has been found more than one time 
int ReadPostiveNumber(string message) {
    int number = 0;
    do{
    cout << message << endl;
    cin >> number;
    }while(number <= 0);

    return number;
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

void PrintAllDigitFrquency(int number){
  int digit_frequancy = 0;
  for(int i = 0; i <= 9 ; i++){
    digit_frequancy = CountDigitFrequency( number ,i );
    if (digit_frequancy > 0){
        cout << "Digit " << i << " Frequancy is " << digit_frequancy << " Time(s). \n"; 
    }

  }
}

int main()
{
  int number = ReadPostiveNumber("Please enter a postive number ");
  PrintAllDigitFrquency(number);

    return 0;
}
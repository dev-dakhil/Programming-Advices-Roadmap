#include <iostream>
using namespace std;
int ReadPostiveNumber(string message){
    int num = 0;
    do{
        cout << message << endl;
        cin >> num;
    }while(num <= 0);

    return num;
}

int SumOfDigits(int number){
    int sum = 0;
    int lastdigits = 0;

    while(number > 0){
    lastdigits = number % 10;
    sum = sum + lastdigits;
    number = number / 10;
    }
    return sum;
}
int main (){

int sumofdigits = 0;
sumofdigits = SumOfDigits(ReadPostiveNumber("Please enter a Positive Number?"));
cout << "\n Sum Of Digits Is = " << sumofdigits << endl;
    return 0;
}
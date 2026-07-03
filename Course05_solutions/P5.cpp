#include <iostream>
using namespace std;

int ReadPostiveNumber(string message){
    int num = 0;
    do{
        cout << message << endl;
        cin >> num;
    }while(num <=0);

    return num;
}

void PrintDigits(int number){
    int lastdigits = 0;
    while(number > 0){
      lastdigits = number % 10;
      number = number / 10;
      cout << lastdigits << endl;
    }
}

int main (){

PrintDigits(ReadPostiveNumber("Please enter a Positive number?"));


    return 0;
}
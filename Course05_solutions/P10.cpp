#include <iostream>
using namespace std;

// i felt very happy when i solve this problem at time lass than 30 min Programming <3
int ReadPostiveNumber(string messege){
    int number = 0;
    do{
        cout << messege << endl;
        cin >> number;
    }while(number <= 0);
    return number;

}

int ReversedNumber(int number){
    int lastdigit = 0;
    int number2 = 0;

    while(number >= 1){
    lastdigit = number % 10;
    number = number / 10;

    number2 = number2 * 10 + lastdigit;
    }
    return number2;
}

void PrintDigits(int number){
    int lastdigits = 0;

    while(number > 0){
        lastdigits = number % 10;
        cout << lastdigits << endl;
        number = number / 10;
    }
}

int main (){

    PrintDigits(ReversedNumber(ReadPostiveNumber("Please Enter a Postive Number")));

    return 0;
}
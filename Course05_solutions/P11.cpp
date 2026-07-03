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

int Clac_ReversedNumber(int number){
    int lastdigit = 0;
    int reversednumber = 0;
    while(number >= 1){
        lastdigit = number % 10;
        reversednumber = reversednumber *10 + lastdigit;
        number = number / 10;
    }
    return reversednumber;
}

bool IsPalindromeNumber(int number){
    return number == Clac_ReversedNumber(number);
}

int main (){

int number = ReadPostiveNumber("Please Enter a Postive Number ");

if (IsPalindromeNumber(number)){
        cout << number << " is Palindrome " << endl;
    }
    else {
        cout << number << " is Not Palindrome " << endl;
    }

    return 0;
}
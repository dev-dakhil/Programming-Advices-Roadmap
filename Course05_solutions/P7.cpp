// Write a program to Read a number and print it reversed 
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

int Calc_ReversedNumber(int number){
    int lastnumber , number2 = 0;
    while(number > 0){ // 123
        lastnumber = number % 10;
        number = number / 10;
        number2 = number2 * 10 + lastnumber;
    }
    return number2;

 
}

void PrintReverseNumber(int number){
    cout << "\nReverse is: \n" << number << endl;
}
int main (){

PrintReverseNumber(Calc_ReversedNumber(ReadPostiveNumber("Please Enter a Postive Number?")));

return 0;
}
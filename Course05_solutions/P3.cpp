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

bool IsPerfectNumber(int number){
    int sum = 0;
    for(int i =1 ; i < number ; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return number == sum;
}

void PrintResult(int number){
    if(IsPerfectNumber(number)){
        cout << number << " is a Perfect Number. " << endl;
    }
    else {
        cout << number << " Is Not Perfect number " << endl;
    }
}

int main (){

PrintResult(ReadPostiveNumber("Please Enter a Postive Number ?"));

    return 0;
}
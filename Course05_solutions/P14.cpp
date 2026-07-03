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


void InvertedLetterPattern(int num){
    for(int i =  num - 1 + 65; i >= 65  ; i--){
        for(int j = 0 ; j < i - 65 + 1 ; j++){
            cout << char(i);
        }
        cout << endl;
    }
}

int main (){

InvertedLetterPattern(ReadPostiveNumber("Please Enter a Postive Number "));
    return 0;
}
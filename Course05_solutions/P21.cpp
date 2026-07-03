#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enCharType{ SmallLetter = 1 , CapitalLetter = 2 , SpecialCharactor = 3 , Digit = 4};

int ReadPostiveNumber(string message){
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    }while(number <= 0);

    return number;
}

int RandomNumber(int from , int to){
    int randnum = rand() % (to - from + 1) + from;

    return randnum;
}

char GetRandomCharactor(enCharType chartype){
switch(chartype){
    case enCharType::SmallLetter:{
        return char(RandomNumber(97,122));
        break;
    }
    case enCharType::CapitalLetter:{
        return char(RandomNumber(65,90));
        break;
    }
    case enCharType::SpecialCharactor :{
        return char(RandomNumber(33,47));
        break;
    }
    case enCharType::Digit :{
        return char(RandomNumber(48,57));
        break;
    }
    default :
    cout << "Enter a vild vule" << endl;
    return '\0';
    
}
}

string GenerateWord(enCharType chartype, short length){
    string word = "";


    for(int i = 1 ; i <= length ; i++){
        word = word + GetRandomCharactor(enCharType::CapitalLetter);
    }
    return word;
}

string GenerateKey(){
    string key = "";

    key = key + GenerateWord(enCharType::CapitalLetter,4);
    key = key + GenerateWord(enCharType::CapitalLetter,4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter,4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter,4);

    return key;
} 

void GenerateKeys(short NumberOfKeys){
    for (int i = 1; i <= NumberOfKeys ; i++){
        cout << "Key [ " << i << " ] : ";
        cout <<  GenerateKey() << endl;
    }
}

int main (){
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPostiveNumber("Please enter a number of keys to generate? \n "));

    return 0;
}
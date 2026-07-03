// write program that take a number and then floor the number 
#include <iostream>
#include <cmath>
using namespace std;
float GetFractionPart(float Number){
    return Number - int(Number);
}

float ReadNumber(){
    float num = 0;
    cout << "Please Enter a number ";
    cin >>num;
    return num;
}


int MyRound(float number){
    int IntPart;
    IntPart = int(number); // 5.5

    float FractionPart = GetFractionPart(number);

    if(abs(FractionPart) >= 0.5){
        if (number > 0)
        return ++IntPart;

        else {
            return --IntPart;
        }
    }
    else {
        return IntPart;
    }
        
    
}

int main (){

    float number = ReadNumber();
    cout << "My Round Reasult : ";
    cout << MyRound(number) << endl;
    cout << "c++ Round Reasult : ";
    cout << round(number);

    return 0;
}
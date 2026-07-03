#include <iostream>
#include <cmath>
using namespace std;


float ReadNumber(){
    float num = 0;
    cout << "Please Enter a number ";
    cin >>num;
    return num;
}


float GetFractionPart(float Number){
    return Number - int(Number);
}


    signed int MyFloor(float number){ // 3
    if (number > 0){
    return int(number);
    }
    else {
        return int(number) - 1;
    }


}


int main (){
    float number = ReadNumber();

    cout << "C++ floor Result: " << floor(number) << endl;=;
    cout << "my floor Result: " << MyFloor(number) << endl;;



    return 0;
}
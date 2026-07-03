#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(){
    float num = 0;
    cout << "Please Enter a number ";
    cin >>num;
    return num;
}

float MyABS(float number){
    if (number >= 0){
        return number;
    }
    else{
        return number * -1;
    }
}

int main (){

float number = ReadNumber();

cout << "My abs result: " << MyABS(number) << endl;
cout << "c++ abs reslut " << abs(number) << endl;


    return 0;
}
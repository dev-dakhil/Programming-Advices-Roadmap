#include <iostream>
#include <cmath>
using namespace std;


float ReadNumber()
{
    float num = 0;
    cout << "Please Enter a number ";
    cin >> num;
    return num;
}

int MySqrt(float number){
    return pow(number,0.5);
}

int main (){

    float number = ReadNumber();

    cout << "My Sqrt result: " << MySqrt(number) << endl;
    cout << "C++ Sqrt result: " << MySqrt(number) << endl;

    
    return 0;
}
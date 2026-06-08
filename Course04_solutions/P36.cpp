#include <iostream>
#include <string>

using namespace std;

enum enOperation
{
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};

float ReadNumber(string messege)
{
    float num = 0;
    cout << messege << endl;
    cin >> num;

    return num;
}
enOperation ReadOpType()
{
    char ot = '+';
    cout << " Please Enter your Operiton Type (+ , - , * , /) " << endl;
    cin >> ot;

    return (enOperation)ot;
}

void clac(float num1, float num2, enOperation ot)
{

    switch (ot)
    {
    case enOperation::Add:
        cout << num1 + num2;
        break;
    case enOperation::Subtract:
        cout << num1 - num2;
        break;
    case enOperation::Multiply:
        cout << num1 * num2;
        break;
    case enOperation::Divide:
        cout << num1 / num2;
        break;
    default:
        cout << num1 + num2;
    }
}

int main()
{
    float num1 = ReadNumber("Enter your first number");
    float num2 = ReadNumber("Enter your second number");

    enOperation Read_ot = ReadOpType();

    cout << "Result is = ";
    clac(num1, num2, Read_ot);

    return 0;
}
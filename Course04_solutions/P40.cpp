#include <iostream>
#include <string>

using namespace std;

float ReadPostiveNumber(string message)
{
    float num = 0;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

float ClacTotalPill (float billvalue){
float servicefee = billvalue * 1.10;
float totalbill_vlue = servicefee * 1.16; 

return totalbill_vlue;
}

void PrintTotalBillVlue(float totalbillvlue){
    cout << "Please Enter a Total Bill" << totalbillvlue << endl;
}
int main()
{
    float P1_totalbill = ReadPostiveNumber("Total Bill after service Fee and Sels Tex");
    
    cout << "Total Bill " << P1_totalbill << endl;
    PrintTotalBillVlue(ClacTotalPill(P1_totalbill));
}
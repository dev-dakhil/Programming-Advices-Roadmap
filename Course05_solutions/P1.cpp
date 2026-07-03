#include <iostream>
using namespace std;

void PrintMultipliactionHeader()
{
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";

    cout << "\t";
    
    for(int i = 1 ; i <=10 ; i++){
        cout << i << "\t";
    }
    cout << "\n__________________________________________________________________________________\n";
}
string numberspace(int i){
if (i < 10){
    return "   |";
}
else{
    return "  |";
}
}
void PrintMultipliactionTableFrom1To10()
{
    PrintMultipliactionHeader();
    for (int i = 1; i <= 10; i++){
        cout << " " << i << numberspace(i) << "\t";

    for(int j = 1; j <= 10; j++){
        cout << j * i << "\t"; 
    }
    cout << endl;
    }
}

int main()
{

    PrintMultipliactionTableFrom1To10();

    return 0;
}
#include <iostream>
using namespace std;

int RandomNumber(int from , int to){
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

short int ReadPostiveNumber(string message){
short int num = 0;
do{
cout << message << endl;
cin >> num;
}while(num <= 0);

return num;
}


void FillArryWithRandomNumber(int arr[100] , short int &ArrLength){
    for (int i = 0 ; i < ArrLength ; i++){
        arr[i] = RandomNumber(1,100);
    }
}

void PrintArry(int arr[100] , int arrlength){
    for(int i = 0; i < arrlength; i++){
        cout << arr[i] << " ";

    }
        cout << endl;
}

int main (){
    srand((unsigned)time(NULL));

    int arr[100];
    short int arrlength = ReadPostiveNumber("Enter a arry length max size 100");

    FillArryWithRandomNumber(arr ,arrlength);

    cout << "\n Array Elements: ";
    
    PrintArry(arr , arrlength);
       return 0;
}
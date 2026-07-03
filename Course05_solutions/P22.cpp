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

void ReadArray(int arr[100] , int &arrLength){
    cout << "\n Enter number of elements: \n";
    cin >> arrLength;

    cout << "\n Enter array elements: \n";

    for (int i = 0; i < arrLength ; i++){
        cout << "Element [ " << i + 1 << " ] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray(int arr[100], int arrlength){
    for(int i = 0; i < arrlength ; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

int TimesRepeated (int Numtocheck , int arr[100], int arrLength){
    int count = 0;

    for(int i = 0; i<= arrLength -1 ; i++){
        if (Numtocheck == arr[i]){
            count++;
        }
    }
    return count;
}

int main (){
int arr[100];
int arrLength = 0;
int NumToCheck = 0;

    ReadArray(arr , arrLength);

    NumToCheck = ReadPostiveNumber("Enter a number you want to check: ");
    
    
    cout << "\n Original array: ";
    PrintArray(arr , arrLength); 

    cout << "\n Number " <<  NumToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumToCheck , arr ,arrLength) << " times(s)" ;

    return 0;
}
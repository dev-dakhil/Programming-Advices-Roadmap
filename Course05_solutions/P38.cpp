#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}


short ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n" << massage << "\n";
    cin >> Number;
    return Number;
}


void FillArrayWithRandomNumbers(int arr[100], short &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void AddArrayElement(int Number, int arr[100], short &arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}

void PrintArray(int arr[100], int arrLength){
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void CopyOddElementsFromArray(int ArrSource[100], int arrDestination[100],short ArrayLength , short &DestinationLength){
    for(int i = 0 ;i < ArrayLength; i++){
        if (ArrSource[i] % 2 != 0){
            AddArrayElement(ArrSource[i],arrDestination,DestinationLength);
        }      
    }
}

int main (){
srand((unsigned)time(NULL));

int arr1[100] , arr2[100];
short arr_tow_length = 0;
short arrlength = ReadNumber("Please Enter array Elements: ");

    FillArrayWithRandomNumbers(arr1,arrlength);
    CopyOddElementsFromArray(arr1,arr2,arrlength,arr_tow_length);

    cout << "\nArray 1 elements: ";
    PrintArray(arr1,arrlength);

    cout << " \nArray 2 odd numbers ";
    PrintArray(arr2,arr_tow_length);



    return 0;
}
#include <iostream>
using namespace std;

void FillArray(int arr[100],short &arrLength){
    arrLength = 10;

    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

short FindNumberPostionInArray(int number , int arr[100], short length){
    for (int i = 0;i < length;i++){
        if (arr[i] == number ) 
        return i;
    }
    return -1;
}


void AddArrayElement(int Number, int arr[100], short &arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}


void PrintArray(int arr[100], short arrLength){
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool IsNumberInArray(int number , int arr[100],short arrLength){
    return FindNumberPostionInArray(number,arr,arrLength) != -1;
}

void CopyDistinctNumberToArray(int arrSource[100],int arrDestination[100], short SourceLength, short &DestinationLength){
    for (int i = 0; i < SourceLength ; i++){
        if (!IsNumberInArray(arrSource[i],arrDestination,DestinationLength)){
            AddArrayElement(arrSource[i],arrDestination,DestinationLength);
        }
    }
}
int main (){
    int arrSource[100] , arrDestination[100];
    short SourceLength , destinationLength = 0;

    FillArray(arrSource,SourceLength);

    cout << "\n Array elements: \n" << endl;
    PrintArray(arrSource,SourceLength);

    CopyDistinctNumberToArray(arrSource,arrDestination,SourceLength,destinationLength);

    cout << "\n Array elements: \n";
    PrintArray(arrDestination,destinationLength);





    return 0;
}
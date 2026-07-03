#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void AddArrayElement(int Number, int arr[100], short &arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}


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

int CountEvenNumber(int arrSource[100],int arrLength){
    int counter = 0;
    for(int i = 0; i < arrLength;i++){
        if(arrSource[i] % 2 == 0){
            counter++;
        }
    }
    return counter;
}


void PrintArray(int arr[100], short arrLength){
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main (){
srand((unsigned)time(NULL));

int arrSource[100];
short arrSourceLength = ReadNumber("Enter array 1 length: ");

FillArrayWithRandomNumbers(arrSource,arrSourceLength);

cout << "Array elements: ";
PrintArray(arrSource,arrSourceLength);

cout << "\nEven Numbers count is: ";
cout << CountEvenNumber(arrSource,arrSourceLength) << endl;



    return 0;
}
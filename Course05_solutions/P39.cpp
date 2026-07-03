#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std; 
enum enPrimeNotPrime{ Prime = 1 , NotPrime = 2};


enPrimeNotPrime CheckPrimeNumber(int NumberToCheck){
    int M = round(NumberToCheck / 2); // 6
    for (int i = 2 ; i <= M ; i++){
        if (NumberToCheck % i == 0){
            return enPrimeNotPrime::NotPrime; 
        }
    }
    return enPrimeNotPrime::Prime ;

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

void CopyPrimeNumbers(int arrsource[100],int arrDestination[100],short arrlength,short &arrdestinationlength){
    for (int i = 0 ; i < arrlength ; i++){
        if(CheckPrimeNumber(arrsource[i]) == enPrimeNotPrime::Prime){
            AddArrayElement(arrsource[i],arrDestination,arrdestinationlength);
        }
    }
}


int main (){
    srand((unsigned)time(NULL));
    int arr[100] , arr2[100];
    short  arrlength , arr2length = 0;
    arrlength = ReadNumber("Enter array length elements: ");

    FillArrayWithRandomNumbers(arr,arrlength);

    CopyPrimeNumbers(arr,arr2,arrlength,arr2length);

    cout << "Array elements 1 ";
    PrintArray(arr , arrlength );


    cout << "Array 2 Prime Numbers ";
    PrintArray(arr2 , arr2length );




    return 0;
}
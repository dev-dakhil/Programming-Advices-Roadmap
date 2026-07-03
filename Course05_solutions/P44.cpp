#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}


void FillArrayWithRandomNumbers(int arr[100], short &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(-100, 100);
    }
}

int CountPostiveElementsInArray(int arrSource[100],int arrLength){
    int counter = 0;
    for(int i = 0; i < arrLength;i++){
        if(arrSource[i] >= 0){
            counter++;
        }
    }
    return counter;
}


short ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n" << massage << "\n";
    cin >> Number;
    return Number;
}


void PrintArray(int arr[100], short arrLength){
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main (){
srand((unsigned)time(NULL));
    int arr[100];
    short arrlangth = ReadNumber("Enter array length ");

    FillArrayWithRandomNumbers(arr,arrlangth);

    cout << "Array Elements : ";
    PrintArray(arr,arrlangth);

   cout << "Psotive Number count " << CountPostiveElementsInArray(arr,arrlangth);



    return 0;
}
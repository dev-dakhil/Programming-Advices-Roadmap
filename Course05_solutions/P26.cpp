#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

short int RandomNumber(int from , int to){
    short int randnum = rand() % (to - from + 1) + from;

    return randnum;
}

int ReadPostiveNumber(string message){
    int num = 0;
    do{
        cout << message << endl;
        cin >> num;
    }while(num <= 0);

    return num;
}

void FillArryElementswithRandomNumber(int arr[100],short int &arrlength){
    for (int i = 0 ; i < arrlength ; i++){
        arr[i] = RandomNumber(1,100);
    }
}

void PrintArrayElements(int arr[100], short int arrlength){
    for (int i = 0; i < arrlength ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

long int SumNumberOfArryElements(int arr[100],short int arrlength){
       long int sum = 0;
    for(int i = 0; i < arrlength ; i++){
            sum += arr[i];
    }
        cout << "\n";
    return sum;
}


int main (){
    srand((unsigned)time(NULL));
    int arr[100];
    short int arrlenght = 0;
     arrlenght = ReadPostiveNumber("Enter array elements: ");


    FillArryElementswithRandomNumber(arr,arrlenght);

    cout << "Array Elements: ";
    PrintArrayElements(arr,arrlenght);

    cout << "Sum of all number is: ";
    cout << SumNumberOfArryElements(arr,arrlenght);

    return 0;
}

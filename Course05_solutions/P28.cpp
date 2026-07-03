#include <iostream>
#include <ctime>
#include <cstdlib>
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

void Copyarray(int arr1[100] , int arrlength , int arr2[100]){
    for (int i = 0; i < arrlength ; i++){
        arr2[i] = arr1[i];
    }
}

int main (){
    srand((unsigned)time(NULL));
    int arr1[100] , arr2[100];

    short int arrlength = 0;

    arrlength = ReadPostiveNumber ("Enter a array elements ");

    FillArryElementswithRandomNumber(arr1,arrlength);

    cout << "Array 1 elements: ";
    PrintArrayElements(arr1,arrlength);


    Copyarray(arr1,arrlength,arr2);
    cout << "Array 2 elements: ";
    PrintArrayElements(arr2,arrlength);

    return 0;
}
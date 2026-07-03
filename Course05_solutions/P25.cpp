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

int CheckMinNumberOfArry(int arr[100],short int arrlength){
       int min = arr[0];
    for(int i = 0; i < arrlength ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
        cout << "\n";
    return min;
}

int main (){
    srand((unsigned)time(NULL));
    int arr[100];
    short int arrlength = 0;
    arrlength = ReadPostiveNumber("Enter a array Elements ");

    FillArryElementswithRandomNumber(arr,arrlength);

    cout << "Array Elements: ";
    PrintArrayElements(arr ,arrlength);

    cout << "Min Number is : ";
    cout << CheckMinNumberOfArry(arr,arrlength);


    return 0;
}
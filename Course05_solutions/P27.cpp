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

long int SumNumberOfArryElements(int arr[100],short int arrlength){
       long int sum = 0;
    for(int i = 0; i < arrlength ; i++){
            sum += arr[i];
    }
    return sum;
}

float AvgOfArrayElements( int arr[100] , short int arrlength){
    return (float) SumNumberOfArryElements(arr,arrlength) / arrlength;
}


int main (){
    srand((unsigned)time(NULL));
    int arr[100];
    short int arrlength = 0;
    
    arrlength = ReadPostiveNumber("Enter arry elements ");

    FillArryElementswithRandomNumber(arr,arrlength);

    cout << "Array Elements: ";
    PrintArrayElements(arr , arrlength);

    cout << "Average of all number is : ";
    cout << AvgOfArrayElements(arr , arrlength);


    return 0;
}
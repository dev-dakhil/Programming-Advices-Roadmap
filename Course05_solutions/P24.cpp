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

int CheckMaxNumberOfArry(int arr[100],short int arrlength){
       int max = arr[0];
    for(int i = 0; i < arrlength ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
        cout << "\n";b
    return max;
}



int main (){
srand((unsigned)time(NULL));
int arr[100];
short arrylength = ReadPostiveNumber("Enter arry elements Please ");

FillArryElementswithRandomNumber(arr,arrylength);

cout << "\n array Elements: ";
PrintArrayElements(arr,arrylnegth);

cout <<  "\nMax Number is: " << CheckMaxNumberOfArry(arr, arrylength);


return 0;

}
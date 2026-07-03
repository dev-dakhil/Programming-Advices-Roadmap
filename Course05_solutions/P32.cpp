#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


short int RandomNumber(int from, int to)
{
    short int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

int ReadPostiveNumber(string message)
{
    int num = 0;
    do
    {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}

void FillArryElementswithRandomNumber(int arr[100], short int &arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int arr[100], short int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

    void CopyArrayInReverseOrder(int arrSource[100],int arrDestination[100],short int arrlength){
        for (int i = 0; i < arrlength ; i++){
            arrDestination[i] = arrSource[arrlength - 1 - i];
        }

    } 

int main (){
    srand((unsigned)time(NULL));
    short int arrlength; // 5
    int arr1 [100] , arr2[100];

    arrlength = ReadPostiveNumber("Enter a array length ");

    FillArryElementswithRandomNumber(arr1,arrlength);



    cout << "Array 1 elements: ";
    PrintArrayElements(arr1,arrlength);

    CopyArrayInReverseOrder(arr1,arr2,arrlength);

    cout << "Array 2 elements after copy in reverse: ";
    PrintArrayElements(arr2,arrlength);



    return 0;
}
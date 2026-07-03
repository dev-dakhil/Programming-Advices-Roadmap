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

void FillSumTowArrays(int arr1[100], int arr2[100], int sumarry3[100], short int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        sumarry3[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arr3[100];
    short int arrlength = 0;
    arrlength = ReadPostiveNumber("Enter Array elements: ");

    FillArryElementswithRandomNumber(arr1, arrlength);

    FillArryElementswithRandomNumber(arr2, arrlength);

    cout << "Array 1 elements: ";
    PrintArrayElements(arr1, arrlength);

    cout << "Array 2 elements: ";
    PrintArrayElements(arr2, arrlength);

    FillSumTowArrays(arr1, arr2, arr3, arrlength);

    PrintArrayElements(arr3, arrlength);

    return 0;
}

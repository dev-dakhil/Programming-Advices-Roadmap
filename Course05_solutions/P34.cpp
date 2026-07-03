#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n" << massage << "\n";
    cin >> Number;
    return Number;
}


short RandomNumber(int from, int to)
{
    short randnum = rand() % (to - from + 1) + from;
    return randnum;
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

    short FindElementsPositionInArray(int arr[100], short int arrlength , int SearchNumber){
        for (int i = 0; i < arrlength; i++){
            if(arr[i] == SearchNumber){
                return i;
            }
        }
        return -1;
    }


int main (){
    srand((unsigned)time(NULL));
    int arr1[100];
    short int arrlength = ReadNumber("Enter array elements length"); 

    FillArryElementswithRandomNumber(arr1,arrlength);

    cout << "\n Array 1 elements: ";
    PrintArrayElements(arr1,arrlength);

    short int num = ReadNumber("Please Enter the number to search for: ");

    short NumberPosition = FindElementsPositionInArray(arr1,arrlength,num);

    if (NumberPosition == -1)
    cout << "The number is not found :-(\n";
    else {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order : " << NumberPosition + 1 << endl;
    }
    




    return 0;
}
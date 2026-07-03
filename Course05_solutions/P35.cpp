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

    bool IsNumberInArray(int number, int arr[100],int arrlength){
        return FindElementsPositionInArray(arr,arrlength,number)!= -1;
    }
int main (){
    srand((unsigned)time(NULL));
    int arr1[100];
    short int arrlength = ReadNumber("Enter arry 1 elements: ");

    FillArryElementswithRandomNumber(arr1,arrlength);
    cout << "Array 1 elements: ";
    PrintArrayElements(arr1,arrlength);

    int Num_search = ReadNumber("Please enter a number to search for? ");
        if (IsNumberInArray(Num_search,arr1,arrlength)){
        cout << "Yes it is found :-)\n";
        }
        else
            cout << "No, The number is not found :-(\n";
    return 0;
}
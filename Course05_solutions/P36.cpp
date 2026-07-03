#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
short ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n" << massage << "\n";
    cin >> Number;
    return Number;
}


void PrintArrayElements(int arr[100], short arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

    void AddArrayElements(int arr[100], short &ArrLength , int number){
        ArrLength++;
        arr[ArrLength - 1] = number;
    }

    void InputUserNumberInArray(int arr[100], short &arrlength){
        bool AddMore = true;
        do{
            AddArrayElements(arr,arrlength,ReadNumber("Please Enter a number"));

            cout << "\nDo you want to add more number? [0]:no,[1]:yes? ";
            cin >> AddMore;
        }while(AddMore);
    }


int main (){
srand((unsigned)time(NULL));
int arr[100];
short arrlength = 0;

InputUserNumberInArray(arr,arrlength);

cout << "\nArray Length: " << arrlength << endl;
cout << "Array elements: ";
PrintArrayElements(arr,arrlength);



    return 0;
}
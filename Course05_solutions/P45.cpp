#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], short &arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
}

int CountNegativeElementsInArray(int arrSource[100], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] < 0)
        {
            counter++;
        }
    }
    return counter;
}

short ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n"
         << massage << "\n";
    cin >> Number;
    return Number;
}

void PrintArray(int arr[100], short arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    short arrlength = ReadNumber("Enter array langth: ");

    FillArrayWithRandomNumbers(arr, arrlength);

    cout << "array elements: ";
    PrintArray(arr, arrlength);

    cout << "Negative number count " << CountNegativeElementsInArray(arr, arrlength);

    return 0;
}
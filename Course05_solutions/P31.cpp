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
void Swap(int& A, int& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}


void ShuffleArrayElements(int arr[100] , short int arrlength){
    for (int i  = 0 ; i < arrlength; i++){
        short int index1 = RandomNumber(1,arrlength)-1;
        short int index2 = RandomNumber(1,arrlength)-1;

        Swap(arr[index1] , arr[index2]);
    }
}

int main (){
srand((unsigned)time(NULL));

short int arrlength = 0;
int arr1[100];
    arrlength = ReadPostiveNumber("Enter a postive number ");
    FillArryElementswithRandomNumber(arr1,arrlength);

    cout << "Array elements before shuffle: ";
    PrintArrayElements(arr1,arrlength);

    ShuffleArrayElements(arr1,arrlength);

    cout << "Array elements After shuffle: ";
    PrintArrayElements(arr1,arrlength);



    return 0;
}
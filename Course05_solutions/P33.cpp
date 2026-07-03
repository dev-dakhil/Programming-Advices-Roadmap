#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

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


short RandomNumber(int from, int to)
{
    short randnum = rand() % (to - from + 1) + from;
    return randnum;
}

enum enCharType{ SmallLetter = 1 , CapitalLetter = 2 , SpecialCharactor = 3 , Digit = 4};

char GetRandomCharactor(enCharType chartype){
switch(chartype){
    case enCharType::SmallLetter:{
        return char(RandomNumber(97,122));
        break;
    }
    case enCharType::CapitalLetter:{
        return char(RandomNumber(65,90));
        break;
    }
    case enCharType::SpecialCharactor :{
        return char(RandomNumber(33,47));
        break;
    }
    case enCharType::Digit :{
        return char(RandomNumber(48,57));
        break;
    }
    default :
    cout << "Enter a vild vule" << endl;
    return '\0';
    
}
}

string GenerateWord(enCharType chartype, short length){
    string word = "";


    for(int i = 1 ; i <= length ; i++){
        word = word + GetRandomCharactor(chartype);
    }
    return word;
}

string GenerateKey(){
    string key = "";

    key = key + GenerateWord(enCharType::CapitalLetter,4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter,4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter,4) + "-";
    key = key + GenerateWord(enCharType::CapitalLetter,4);

    return key;
} 

void GenerateKeys(short NumberOfKeys){
    for (int i = 0; i <= NumberOfKeys ; i++){
        cout << "Key [ " << i  << " ] : ";
        cout <<  GenerateKey() << endl;
    }
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

    void FillArraywithKeys(string arr1[100] , short arrlength){
        for(int i = 0; i < arrlength ; i++){
            arr1[i] = GenerateKey();
        }
    }

    
void PrintArrayElementsWithString(string arr[100], short int arrlength)
{
    cout << "\n Array elements: \n\n";

    for (int i = 0; i < arrlength; i++)
    {
        cout << "Array[" << i + 1 << "] : ";
        cout << arr[i] << "\n";
    }
    cout << "\n";
}

int main (){
    srand((unsigned)time(NULL));
    string arr1[100];
    short arrlength = ReadPostiveNumber("How many keys? ");

    FillArraywithKeys(arr1,arrlength);
    PrintArrayElementsWithString(arr1,arrlength);







    return 0;
}
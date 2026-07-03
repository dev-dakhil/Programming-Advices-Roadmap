#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enPrimeNotPrime{ Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrimeNotPrime(int num){
    if (num <= 1) return enPrimeNotPrime::NotPrime; // الأرقام 1 وأقل ليست أولية
    int HalfNumber = num / 2;
    for (int i = 2 ; i <= HalfNumber; i++){
        if (num % i == 0){
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void FillArryElementswithRandomNumber(int arr[100], short int &arrlength){
    for (int i = 0 ; i < arrlength ; i++){
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int arr[100], short int arrlength){
    for (int i = 0; i < arrlength ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// تصحيح: استخدمنا الأسماء المعرفة في الدالة (arrSource و arrDestination)
void Copyarray(int arrSource[100], int arrlength, int arrDestination[100]){
    for (int i = 0; i < arrlength ; i++){
        arrDestination[i] = arrSource[i];
    }
}

void CopyOnlyPrimaryNumber(int arrSource[100], int arrDestination[100], int arrlength, int &arr2lenght){
    int counter = 0;
    for (int i = 0; i < arrlength; i++){
        if(CheckPrimeNotPrime(arrSource[i]) == enPrimeNotPrime::Prime){
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }
    arr2lenght = counter; // أخذنا القيمة كما هي لتمثل عدد العناصر الفعلي
}

int main (){
    srand((unsigned)time(NULL));
    short int arrlength = 0;
    int arr1[100], arr2[100], arrprimnum = 0; // عرفنا متغير لطول المصفوفة الثانية

    arrlength = ReadPostiveNumber("Enter elements of array ");

    FillArryElementswithRandomNumber(arr1, arrlength);

    cout << "Array 1 elements: ";
    PrintArrayElements(arr1, arrlength);

    // استدعاء دالة النسخ للأرقام الأولية فقط
    CopyOnlyPrimaryNumber(arr1, arr2, arrlength, arrprimnum);

    cout << "Prime Numbers in Array 2: ";
    // طباعة المصفوفة الثانية باستخدام طولها الفعلي (arrprimnum)
    PrintArrayElements(arr2, arrprimnum);

    return 0;
}
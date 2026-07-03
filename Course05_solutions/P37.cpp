#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// 1. دالة لتوليد رقم عشوائي
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

// 2. دالة لتعبئة المصفوفة الأولى بأرقام عشوائية
void FillArrayWithRandomNumbers(int arr[100], short &arrLength) {
    cout << "\nEnter number of elements: ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

// 3. الدالة "البطلة" التي تضيف عنصراً واحداً وتزيد الطول
void AddArrayElement(int Number, int arr[100], int &arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}

// 4. دالة النسخ التي تستخدم دالة الإضافة (هنا كان اللبس عندك)
void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], short arrLength, int &arrDestinationLength) {
    for (int i = 0; i < arrLength; i++) {
        // نأخذ العنصر من المصدر ونمرره لدالة الإضافة لتضعه في الهدف
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
    }
}

// 5. دالة لطباعة المصفوفة
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // بذر الأرقام العشوائية
    srand((unsigned)time(NULL));

    int arr1[100];
    short arr1Length = 0;

    // الخطوة 1: تعبئة المصفوفة الأولى
    FillArrayWithRandomNumbers(arr1, arr1Length);

    int arr2[100];
    int arr2Length = 0; // المصفوفة الثانية تبدأ بطول 0

    // الخطوة 2: نسخ المصفوفة الأولى إلى الثانية
    CopyArrayUsingAddArrayElement(arr1, arr2, arr1Length, arr2Length);

    // الخطوة 3: عرض النتائج
    cout << "\nArray 1 elements:\n";
    PrintArray(arr1, arr1Length);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}
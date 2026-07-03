#include <iostream>
using namespace std;

short ReadNumber(string massage)
{
    int Number = 0;
    cout << "\n" << massage << "\n";
    cin >> Number;
    return Number;
}

void FillArrayWithUserNumbers(int arr[100], short &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cin >> arr[i];
        cout << " ";
    }
}

bool IsPolindromeArray(int arr[100],short arrylength){
    for(int i = 0; i < arrylength / 2; i++){
        if (arr[arrylength - i - 1] != arr[i]){
            return false;
        }
    }
    return true;
}


int main (){
int arr[100];
short arrylength = ReadNumber("Please Enter arry length: ");

    cout << " Please Enter array elements value: ";
    FillArrayWithUserNumbers(arr,arrylength);

    if (IsPolindromeArray(arr,arrylength)){
        cout << " \n Array is Palindrome\n";
    }
    else {
        cout << "\nNo array is Not Palindrome\n";  
    }




    return 0;
};
#include <iostream>
#include <string>
using namespace std;

int ReadPostiveNumber(string message){
    int num = 0;
    do{
        cout << message << endl;
        cin >> num;
    }while(num <= 0);

    return num;
}

void PrintLetterPattren(int number){
    cout << endl;

    for(int i = 65; i <= 65 + number - 1 ; i++){
        for(int j = 1 ; j <= i - 65 + 1 ; j++ ){
            cout << char(i);
        }
        cout << endl;
    }
}
int main (){
PrintLetterPattren(ReadPostiveNumber("Please Enter a Postive Number"));
    return 0;
}
#include <iostream>
using namespace std;

int ReadPostive(string message){
    int num = 0;
    do{
        cout << message << endl;
        cin >> num;
    }while(num <= 0);

    return num;
}

void PrintNumberPattern(int num){
    for(int i = 1; i <= num ; i++){
        for (int j = 0 ; j < i ; j++ ){
            cout << i;
        }
        cout << endl;
    }

}

int main (){

PrintNumberPattern(ReadPostive("Please Enter a postive number"));

    return 0;
}
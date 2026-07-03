#include <iostream>
using namespace std;

void PrintWordsFromAAAToZZZ(){
    for(int i = 65; i <= 90 ; i++){
        cout << endl;
        string word = "";
        for(int j = 65; j <= 90 ; j++){
            for(int k = 65 ; k <= 90 ; k++){
            
            word.append(1,char(i));
            word.append(1,char(j));
            word.append(1,char(k));

            cout << word << endl;
            word = " ";
            }
        }
    cout << "__________________________";
    }
}


int main (){

PrintWordsFromAAAToZZZ();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string ReadPassword(){
        string password = " ";
        cout << "Please enter a 3-Letter Password (all capital)? " << endl;
        cin >> password;
        

    return password;
}

bool GussPassword(string OrginalPassword){
    int counter = 0;
    string currentword = " ";

    for(int i = 65; i <= 90 ; i++){
        for(int j = 65; j <= 90 ; j++){
            for(int k = 65; k<=90; k++){
            
                currentword = currentword + char(i);
                currentword = currentword + char(j);
                currentword = currentword + char(k);

                counter++;

            cout << "Tries [ " << counter << " ]: " << currentword << endl;

            if (currentword == OrginalPassword){
             cout << endl << "Password is " << OrginalPassword << endl;
             cout << " Found after " << counter << " trial(s) " << endl;
                return true;
            }
            currentword = "";
            }
        }
    }
    return false;
}


int main (){

GussPassword(ReadPassword());


    return 0;
}
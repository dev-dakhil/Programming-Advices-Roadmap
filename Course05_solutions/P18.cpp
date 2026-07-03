#include <iostream>
#include <string>
using namespace std;

string ReadText(){
    string Text = " ";
    cout << "Please enter a Text? " << endl;
    getline(cin , Text);

    return Text;
    }

    string EncryptText(string text , short encryptionkey){
        for(int i  = 0 ; i < text.length() ; i++){
            text[i] = char((int)text[i] + encryptionkey);
        }
        return text;
    }


    string DecryptText(string text , short encryptionkey){
        for (int i = 0; i < text.length() ; i++){
            text[i] = char((int)text[i] - encryptionkey);
        }
        return text;
    }



int main (){

const short encryptionkey = 2;
    
    string text = ReadText();
    string text_after_encryption = EncryptText  (text , encryptionkey);
    string text_after_decryption = DecryptText (text_after_encryption , encryptionkey);
    cout << "_______________________________" << endl;
    cout << "text before encryption " << text << endl;
    cout << "text after encryption " <<  text_after_encryption << endl;
    cout << "text after decryptext " << text_after_decryption << endl;



    return 0;
}
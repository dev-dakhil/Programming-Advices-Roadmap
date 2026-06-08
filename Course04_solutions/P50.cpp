#include <iostream>
using namespace std;

string ReadPinCode(){
    string pincode;
    cout << "Please Enter your Pin Code " << endl;
    cin >> pincode;

    return pincode;
}

bool  Login(){
    string pincode;
        int counter;
        counter = 3;
    do{
        counter--;
        pincode = ReadPinCode();
        if(pincode == "1234"){
         return true;
        }
        else{
            cout << "\n Wrong PIN , You have " << counter << " Of try\n";
            system("color 4F");
        }
    }while(counter >=1 && pincode !="1234");
    return false;
}
int main (){
if(Login()){
    system("color 2F");
    cout << "\n Your Balance is " << 7500 << endl;
}
else{
    cout << "\n Your card is blocked Call the bank for help\n" << endl;
}

    return 0;
}
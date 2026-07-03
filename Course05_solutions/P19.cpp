#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber(int from , int to){
   int randomnumber= rand() % (to - from + 1 ) + from;

   return randomnumber;
}

int main (){
srand((unsigned)time(NULL));

cout << RandomNumber(1, 10);

    return 0;
}
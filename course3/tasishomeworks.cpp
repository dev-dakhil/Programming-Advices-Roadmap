#include <iostream>
using namespace std;
void readGrades(float grades[3])
{
    cout << " Enter a grade1: " << endl;
    cin >> grades[0];
    cout << " Enter a grade2: " << endl;
    cin >> grades[1];
    cout << " Enter a grade3: " << endl;
    cin >> grades[2];
}
float clacavgGrades(float grades[3])
{
    return (grades[0] + grades[1] + grades[2]) / 3;
}
int main()
{

    float grades[3];
    readGrades(grades);
    cout << clacavgGrades(grades);

    return 0;
}
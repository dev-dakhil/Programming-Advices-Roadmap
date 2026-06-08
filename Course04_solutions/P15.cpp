#include <iostream>
#include <string>
using namespace std;
void ReadNumber(float &lenth, float &width)
{
    cout << "Enter the lenth of rectangle" << endl;
    cin >> lenth;
    cout << "Enter the width of rectangle" << endl;
    cin >> width;
}
float ClacRectangleArea(float lenth, float width)
{
    return lenth * width;
}
void PrintResult(float ResultRectangle)
{
    cout << " Rectangle Area = " << ResultRectangle << endl;
}
int main()
{
    float lenth, width = 0;
    ReadNumber(lenth, width);
    PrintResult(ClacRectangleArea(lenth, width));

    return 0;
}
/*
A
BC
CDE
DEFG
EFGHI
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int currRow = 1;
    while (currRow <= n)
    {
        int currCol = 1;
        char value = 'A' + currRow - 1;
        while (currCol <= currRow)
        {
            cout << value;
            currCol++;
            value++;
        }
        currRow++;
        cout << endl;
    }
}
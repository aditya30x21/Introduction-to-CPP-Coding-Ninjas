/*
E
DE
CDE
BCDE
ABCDE
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
        char val = 'A' + n - currRow;
        while (currCol <= currRow)
        {
            cout << char(val + currCol - 1);
            currCol++;
        }
        currRow++;
        cout << endl;
    }
}
/*
A
BB
CCC
DDDD
EEEEE
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
        char ch = 'A' + currRow - 1;
        while (currCol <= currRow)
        {
            cout << ch;
            currCol++;
        }
        cout << endl;
        currRow++;
    }
}
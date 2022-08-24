/*
1
21
321
4321
54321
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
        int val = currRow;
        int currCol = 1;
        while (currCol <= currRow)
        {
            cout << val;
            val--;
            currCol++;
        }
        currRow++;
        cout << endl;
    }
    return 0;
}
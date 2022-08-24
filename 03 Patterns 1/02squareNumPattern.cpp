/*
4444
4444
4444
4444
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
        while (currCol <= n)
        {
            cout << n;
            currCol++;
        }
        cout << endl;
        currRow++;
    }
}
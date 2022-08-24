/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char val = 'A' + j - 1;
            cout << val;
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        char value = 'A' + i;

        for (int j = 0; j < n; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }
}
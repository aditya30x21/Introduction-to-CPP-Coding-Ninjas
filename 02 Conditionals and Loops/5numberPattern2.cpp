/*
   1
  23
 345
4567
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        int value = row;
        int col = 1;

        while (spaces <= n - row)
        {
            cout << " ";
            spaces++;
        }
        while (col <= row)
        {
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
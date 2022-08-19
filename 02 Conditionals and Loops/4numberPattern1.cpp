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

    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {
            cout << value;
            value++;
        }
        cout << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int value = row;
        int col = 1;
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
*/
#include <iostream>
using namespace std;

void findLargest(int **arr, int row, int col)
{
    int sum = 0;
    int maxrow = INT_MIN, maxr = 0;
    // int tempr = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxrow)
        {
            maxrow = sum;
            maxr = i;
    
        }
        sum = 0;
    }

    sum = 0;
    int maxcol = INT_MIN, maxc = 0;
    // int tempc = INT_MIN;

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            sum +=  arr[i][j];
        }
        if (sum > maxcol)
        {
            maxcol = sum;
            maxc = j;
        }
        sum = 0;
    }

    if (maxrow > maxcol)
    {
        cout << "row " << maxr << " " << maxrow;
    }
    else if (maxrow < maxcol)
    {
        cout << "column " << maxc << " " << maxcol;
    }
    else
    {
        cout << "row " << maxr << " " << maxrow;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}
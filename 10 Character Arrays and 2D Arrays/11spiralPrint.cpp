#include <iostream>
using namespace std;
void spiralPrint(int **a, int row, int col)
{
    int /*i,*/ rowS = 0, colS = 0;
    int Elements = row * col, count = 0;

    while(count<Elements){
        for(int i = colS;/*count<Elements && */i<col;i++){
            cout<<a[rowS][i]<<" ";
            count++;
        }
        rowS++;

        for(int i = rowS;/*count<Elements && */i<row;i++){
            cout<<a[i][col-1]<<" ";
            count++;
        }
        col--;

        for(int i = col-1;/*count<Elements &&*/ i>=colS;i--){
            cout<<a[row-1][i]<<" ";
            count++;
        }
        row--;

        for(int i = row-1;/*count<Elements &&*/ i>=rowS;i--){
            cout<<a[i][colS]<<" ";
            count++;
        }
        colS++;
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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
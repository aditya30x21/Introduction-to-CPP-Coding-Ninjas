#include <iostream>
using namespace std;
void printer(int **arr, int row, int col){
    for(int i = 0;i<row;i++){
        for(int k = 0;k<row-i;k++){
            for(int j = 0;j<col;j++){
                cout<<arr[i][j]<<' ';
            }
            cout<<endl;
        }
        // cout<<endl;
    }
}
int main()
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
    printer(input, row, col);
    return 0;
}

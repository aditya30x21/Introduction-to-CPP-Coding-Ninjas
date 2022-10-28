#include <iostream>
using namespace std;

int main(){
    
    int row,column;
    cin>>row>>column;

    int arr[row][column];

    for(int i = 0;i<row;i++){
        for(int j = 0;j<column;j++){
            cin>>arr[i][j];
        }
    }

    for(int j = 0;j<column;j++){
        int sum = 0;
        for(int i = 0;i<row;i++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }

    return 0;
}
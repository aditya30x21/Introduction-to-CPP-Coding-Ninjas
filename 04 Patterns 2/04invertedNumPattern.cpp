/*
4444
333
22
1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int currRow = 1;
    while(currRow<=n){
        int currCol = 1;

        while(currCol <= n - currRow + 1){
            cout<<n - currRow + 1;
            currCol++;
        }
        currRow++;
        cout<<endl;
    }
}
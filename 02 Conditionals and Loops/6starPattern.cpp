/*
   *
  ***
 *****
*******
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int spaces = 1;
        while(spaces<= n-row){
            cout<<" ";
            spaces++;
        }

        int col = 1;
        while(col<=2*row-1){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}
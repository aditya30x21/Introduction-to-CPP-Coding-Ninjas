/*
    1
   232
  34543
 4567654
567898765
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int currRow = 1;
    while(currRow<=n){

        int spaces = 1;
        while(spaces <=n - currRow){
            cout<<" ";
            spaces++;
        }

        int val = currRow;
        int currCol = 1;
        while(currCol <= currRow){
            cout<<val;
            val++;
            currCol++;
        }

        val = val - 2;
        while (val >=currRow)
        {
            cout<<val;
            val--;
        }
        
        currRow++;
        cout<<endl;
    }
    return 0;
}
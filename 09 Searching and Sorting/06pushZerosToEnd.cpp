#include <iostream>
using namespace std;

void zeroToEnd(int arr[],int n){
    int x = 0, y = 0;
    while(x<n){
        if(arr[x]!=0){
            swap(arr[x],arr[y]);
            x++;
            y++;
        }
        else{
            x++;
        }
    }
}

int main(){
    int arr[] = {2,6,0,0,1,9,0,8,0};
    int n = 9;
    
    zeroToEnd(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
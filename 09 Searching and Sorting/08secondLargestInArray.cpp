#include <iostream>
using namespace std;

// int function(int arr[],int n){
//     int max = INT_MIN;
//     int i = 0;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     int secondMax = INT_MIN;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>secondMax && arr[i]!=max){
//             secondMax = arr[i];
//         }
//     }
//     return secondMax;
// }

int function(int arr[], int n){
    int max = arr[0];
    int secondMax = INT_MIN;

    int i = 0;
    while (i<n)
    {
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }
        i++;
    }
    return secondMax;
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int  i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<function(arr,n);
    return 0;
}
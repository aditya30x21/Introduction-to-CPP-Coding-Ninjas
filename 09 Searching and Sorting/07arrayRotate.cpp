#include <iostream>
using namespace std;

// 1st Approach

// void arrayRotate(int arr[], int d, int n){
//     int x = 0,temp;
//     while(x<d){
//         temp = arr[0];
//         for(int i = 0;i<n;i++){
//             arr[i] = arr[i+1];
//         }
//         arr[n-1] = temp;
//         x++;
//     }
// }

// 2nd Approach
// void arrayRotate(int arr[], int d, int n)
// {
//     int darray[d];
//     for (int i = 0; i < d; i++)
//     {
//         darray[i] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr[i + d];
//     }

//     int x = 0;
//     for (int i = n - d; i < n; i++)
//     {
//         arr[i] = darray[x];
//         x++;
//     }
// }

// 3rd Approach

void arrayRotate(int *input, int d, int n)
{
    int start = 0,end = n-1;
    while(start<=end){
        swap(input[start],input[end]);
        start++;
        end--;
    }
    // for(int i = 0;i<n;i++){
    //     cout<<input[i]<<" ";
    // }cout<<endl;

    start = 0,end = n - d - 1;
    while(start<=end){
        swap(input[start],input[end]);
        start++;
        end--;
    }
    // for(int i = 0;i<n;i++){
    //     cout<<input[i]<<" ";
    // }

    start = n - d, end = n-1;
    while(start<=end){
        swap(input[start],input[end]);
        start++;
        end--;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    arrayRotate(arr, d, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
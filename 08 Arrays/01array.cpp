#include <iostream>

using namespace std;

int main()
{
    /*
    int arr[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    */

    // User Input Array

    // Maximum element in array
    int n;
    cin >> n;

    int arr[100];

    //  for Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    

    return 0;
}
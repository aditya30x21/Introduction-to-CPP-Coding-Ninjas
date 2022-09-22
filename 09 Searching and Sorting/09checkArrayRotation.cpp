#include <iostream>
using namespace std;

int function(int input[], int n)
{
    for(int i = 0;i<n-1;i++){
        if(input[i]>input[i+1]){
            return i + 1;
        }
    }
    return 0;
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
        cout << function(arr, n);
        return 0;
    }
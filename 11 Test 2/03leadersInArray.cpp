// Sample Input 1 :
// 6
// 3 12 34 2 0 -1
// Sample Output 1 :
// 34 2 0 -1
// Sample Input 2 :
// 5
// 13 17 5 4 6
// Sample Output 2 :
// 17 6

#include <iostream>
using namespace std;

void leader(int *arr, int len)
{
    int finalArr[len];
    int max = INT_MIN;

    int k = 0;

    for(int i = len - 1;i>=0;i--){
        if(arr[i]>=max){
            finalArr[k] = arr[i];
            max = arr[i];
            k++;
        }
    }

    for(int i = k-1;i>=0;i--){
        cout<<finalArr[i]<<" ";
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

    leader(arr, n);
    return 0;
}

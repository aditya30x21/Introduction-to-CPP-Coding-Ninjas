#include <iostream>
using namespace std;

// Time - O(N) Space - O(N)

int linearSearch(int *arr, int n, int x)
{
    // Write your code here
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            return i;
        }
    }
    return -1;
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
    int x;
    cin >> x;
    cout << linearSearch(arr, n, x);
    return 0;
}

#include <iostream>
using namespace std;

/*
Time - O(log n)
Space - O(1)
*/

int binarySearch(int *arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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

    cout<<binarySearch(arr, n, x);

    return 0;
}
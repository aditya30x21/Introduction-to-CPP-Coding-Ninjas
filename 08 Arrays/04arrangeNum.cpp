/*
INPUT -  5 
OUTPUT - 1 3 5 4 2
*/


#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    // Write your code here
    int start = 0;
    int end = n - 1;

    // int val = 1;  || To enter the value in array
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            // arr[start] = val;
            arr[start] = i;
            start++;
            // val++;
        }
        else if (i % 2 == 0)
        {
            // arr[end] = val;
            arr[end] = i;
            end--;
            // val++;
        }
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    arrange(arr, n);
    printArray(arr, n);

    return 0;
}
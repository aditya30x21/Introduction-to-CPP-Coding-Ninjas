#include <iostream>
using namespace std;
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    // Write your code here
    int i = size1 - 1;
    int j = size2 - 1;
    int k = max(size1, size2);
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int sum = input1[i] + input2[j] + carry;
        output[k] = sum % 10;
        carry = sum / 10;

        i--;
        j--;
        k--;
    }

    while (i >= 0)
    {
        int sum = input1[i] + carry;
        output[k] = sum % 10;
        carry = sum / 10;
        i--;
        k--;
    }

    while (j >= 0)
    {
        int sum = input2[j] + carry;
        output[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
    }
    output[0] = carry;
}
int main()
{
    // Array 1
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Array 2
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    // Output Array
    int size = max(n, m) + 1;
    int output[size];
    sumOfTwoArrays(arr1, n, arr2, m, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}
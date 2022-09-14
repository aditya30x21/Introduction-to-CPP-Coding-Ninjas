// input  - 1 2 3 4 5 6
// sum    = 7
// output - 1

#include <iostream>
using namespace std;

int tripletSum(int *arr, int size, int x)
{
    int pair = 0;
    // Write your code here
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    pair++;
                }
        }
    }
    return pair;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;
        cin >> size;

        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        cin >> x;

        cout << tripletSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}
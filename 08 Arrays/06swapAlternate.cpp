#include <iostream>
using namespace std;

/*
when n = odd
1 2 3 4 5 6 7

i = 0 i<7-1 i = i + 2

i = 0
2 1 3 4 5 6 7

i = 2
2 1 4 3 5 6 7

i = 4
2 1 4 3 6 5 7

i = 6  6<7-1
//Loop Break
*/

/*
when n = even
1 2 3 4 5 6

i = 0 i<6-1 i = i + 2

i = 0
2 1 3 4 5 6

i = 2
2 1 4 3 5 6

i = 4
2 1 4 3 6 5

i = 6 6<5 Loop Break

*/

void swapAlternate(int *arr, int size)
{
    // Write your code here
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        swapAlternate(arr, size);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}
// input  - 1 0 1 0 1
// output - 0 0 1 1 1

#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    // Write your code here
    int mid = 0;
    int low = 0;
    while (mid < size)
    {
        switch (input[mid])
        {
        case 0:
            swap(input[low++], input[mid++]);
            break;

        case 1:
            mid++;
            break;
        }
        // cout<<low<<" "<<mid<<endl;
        // for (int i = 0; i < size; ++i)
        // {
        //     cout << input[i] << " ";
        // }

        // cout << endl;
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
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        sortZeroesAndOne(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int arr[], int n){
    int low = 0, mid = 0, high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low++],arr[mid++]);
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high--]);
        }
        else{
            mid++;
        }
    }
}

/*
void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;

    // Iterate till all the elements
    // are sorted
    while (mid <= hi)
    {
        switch (a[mid])
        {

        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
        //         cout<<lo<<" "<<mid<<" "<<hi<<endl;
        //         for (int i = 0; i < arr_size; ++i)
        //         {
        //             cout << a[i] << " ";
        //         }

        //         cout << endl;
    }
}
*/
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

        sort012(arr, size);

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        delete[] arr;
        cout << endl;
    }

    return 0;
}
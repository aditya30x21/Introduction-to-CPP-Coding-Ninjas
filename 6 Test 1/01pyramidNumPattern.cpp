//    1
//   212
//  32123
// 4321234
#include <iostream>
using namespace std;

int main()
{

    // Write your code here
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int spaces = 1;
        while (spaces <= n - row)
        {
            cout << " ";
            spaces++;
        }

        int column = 1;
        int value = row;
        while (column <= row)
        {
            cout << value;
            column++;
            value--;
        }

        int right = 2;
        while (right <= row)
        {
            cout << right;
            right++;
        }

        row++;
        cout << endl;
    }
}

// ----------------------------------------------------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int row = 1;
//     for (int row = 1; row <= n; row++)
//     {
//         int spaces = n - row;
//         while (spaces != 0)
//         {
//             cout << " ";
//             spaces--;
//         }
//         int value = row;
//         while (value > 0)
//         {
//             cout << value;
//             value--;
//         }
//         value = value + 2;
//         while (value <= row)
//         {
//             cout << value;
//             value++;
//         }
//         cout << endl;
//     }
// }
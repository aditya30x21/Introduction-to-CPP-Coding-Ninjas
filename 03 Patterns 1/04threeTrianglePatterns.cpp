#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        i++;
        cout << endl;
    }

    cout << endl;

    i = 1;
    while (i <= n)
    {
        int j = 1;
        int val = i;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        i++;
        cout << endl;
    }

    cout << endl;

    i = 1;
    int val = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        i++;
        cout << endl;
    }

    return 0;
}
/*
1
12
123
1234

1
23
345
4567

1
23
456
78910
*/
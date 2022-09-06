#include <iostream>

using namespace std;

int main()
{
    int n, num;
    cin >> n;

    int count = 1;
    int max = INT_MIN;
    int secondMax = INT_MIN;

    while (count <= n)
    {
        cin >> num;
        if (num > max)
        {
            secondMax = max;
            max = num;
        }
        else if (num > secondMax && num != max)
        {
            secondMax = num;
        }
        count++;
    }
    cout << secondMax << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int i = 0;

    while (i <= n)
    {
        sum += i;
        i += 2;
    }
    cout << sum << endl;
    return 0;
}
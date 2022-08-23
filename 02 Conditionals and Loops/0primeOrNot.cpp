#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool divided = false;

    int d = 2;
    while (d < n)
    {
        if (n % d == 0)
        {
            cout << "Not Prime";
            divided = true;
            break;
        }
        d++;
    }
    if (!divided)
    {
        cout << "Prime";
    }
    return 0;
}
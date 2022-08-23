#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int evenSum = 0, oddSum = 0;

    while (num > 0)
    {
        int last = num % 10;
        if (last % 2 == 0)
        {
            evenSum += last;
        }
        else
        {
            oddSum += last;
        }
        num /= 10;
    }
    cout << evenSum << " " << oddSum << endl;
}
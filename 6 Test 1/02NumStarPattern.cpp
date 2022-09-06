#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= n - row + 1)
        {
            cout << column;
            column++;
        }

        int star = 1;
        while (star < 2 * row - 1)
        {
            cout << "*";
            star++;
        }

        int right = 1;
        int value = n - row + 1;
        while (right <= n - row + 1)
        {
            cout << value;
            value--;
            right++;
        }
        row++;
        cout << endl;
    }
    return 0;
}
/*
int main()
{
    int n;
    cin >> n;
    int numStars = 0;
    int row = 1;
    while (row <= n)
    {
        int value = 1;
        while (value <= n - row + 1)
        {
            cout << value;
            value = value + 1;
        }
        int stars = 1;
        while (stars <= numStars)
        {
            cout << "*";
            stars = stars + 1;
        }
        value = n - row + 1;
        while (value >= 1)
        {
            cout << value;
            value = value - 1;
        }
        cout << endl;
        row = row + 1;
        numStars = numStars + 2;
    }
}
*/
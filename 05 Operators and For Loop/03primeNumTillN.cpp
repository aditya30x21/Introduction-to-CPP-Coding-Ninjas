#include <iostream>
using namespace std;

int main()
{

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << endl;
        }
    }
}

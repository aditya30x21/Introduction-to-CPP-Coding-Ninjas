#include <iostream>
using namespace std;

bool checkMember(int n)
{

    /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
    if (n == 0 || n == 1)
    {
        return true;
    }
    else
    {
        int a = 0;
        int b = 1;
        int c = a + b;
        while (c < n)
        {
            a = b;
            b = c;
            c = a + b;
        }
        if (c == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    if (checkMember(n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
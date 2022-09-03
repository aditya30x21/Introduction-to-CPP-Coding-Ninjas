/* 
Time complexity: O(N) 
Space complexity: O(1) 
Where 1 represents the constant and 'N' reprents the "Nth" number . 
*/ 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int c;
    for (int i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;
}
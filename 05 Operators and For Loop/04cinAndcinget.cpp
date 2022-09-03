#include <iostream>
using namespace std;

int main()
{
    // cin ignores space and newline
    /*
    char c;
    cin >> c;
    int count = 0;
    while (c != '$')
    {
        cin >> c;
        count++;
    }
    cout << "Count for cin -> " << count << endl;
    */

    // cin.get() counts everything
    char cg;
    cg = cin.get();
    int countAgain = 0;
    while (cg != '$')
    {
        countAgain++;
        cg = cin.get();
    }
    cout << "Count for cin.get -> " << countAgain << endl;

    return 0;
}
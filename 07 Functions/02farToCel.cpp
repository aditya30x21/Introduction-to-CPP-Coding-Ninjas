#include <iostream>
using namespace std;

void printTable(int start, int end, int step)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    int fahrenheit = start;
    while (fahrenheit <= end)
    {
        int celcius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << "\t" << celcius << endl;
        fahrenheit += step;
    }
}

int main()
{
    int start, end, step;
    cin >> start >> end >> step;

    printTable(start, end, step);
}

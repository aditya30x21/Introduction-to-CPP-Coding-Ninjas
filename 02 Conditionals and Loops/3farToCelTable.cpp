#include <iostream>
using namespace std;

int main()
{
    int start, end, step;
    cin >> start >> end >> step;

    int currentFahrenheitValue = start;

    while (currentFahrenheitValue <= end)
    {
        int celciusValue = (currentFahrenheitValue - 32) * 5 / 9;
        // int celciusValue = (int)((5.0 / 9) * (currentFahrenheitValue - 32));
        cout << currentFahrenheitValue << " " << celciusValue << endl;
        currentFahrenheitValue += step;
    }
    return 0;
}
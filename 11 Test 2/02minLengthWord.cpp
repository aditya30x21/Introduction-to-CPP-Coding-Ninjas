#include <iostream>
using namespace std;
#include <climits>
#include <cstring>
void minLengthWord(char input[], char output[])
{
    int minStart = -1;
    int minLength = INT_MAX;
    int currentStart = 0;
    int i = 0;
    int len = strlen(input);
    for (; i < len; i++)
    {
        if (input[i] == ' ')
        {
            int currentWordLength = i - currentStart;
            if (currentWordLength < minLength)
            {
                minLength = currentWordLength;
                minStart = currentStart;
            }
            currentStart = i + 1;
        }
    }
    if (minStart == -1)
    {
        for (int i = 0; i < len; i++)
        {
            output[i] = input[i];
        }
    }
    else
    {
        int currentWordLength = i - currentStart;
        if (currentWordLength < minLength)
        {
            minLength = currentWordLength;
            minStart = currentStart;
        }
        int j = 0;
        for (int i = minStart; i < minStart + minLength; i++)
        {
            output[j] = input[i];
            j++;
        }
        output[j] = '\0';
    }
}

int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}

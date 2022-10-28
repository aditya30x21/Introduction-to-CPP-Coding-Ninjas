/*
Input -  Always indent your code
Output - syawlA tnedni ruoy edoc
*/

#include <iostream>
using namespace std;
void reverse(char str[], int start, int end)
{
    while (start <= end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char input[]) {
    // Write your code here
    int start = 0, end = 0;
    int i;
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end);
}
int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
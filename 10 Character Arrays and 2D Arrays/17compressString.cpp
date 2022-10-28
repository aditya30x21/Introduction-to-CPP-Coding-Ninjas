#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string getCompressedString(string &input)
{
    // Write your code here.
    if (input.length() == 0)
    {
        return "";
    } // Variables to iterate the string and keep the count of the current character.
    int startIndex = 0;
    int endIndex = 0;
    // Resultant string.
    string compressedString = "";
    // Iterate all the characters of the string.
    while (startIndex < input.length())
    {
        while ((endIndex < input.length()) && (input[endIndex] == input[startIndex]))
        {
            endIndex += 1;
        }
        int totalCharCount = endIndex - startIndex;
        // If count is greater than 1, then append count to the string, else only character.
        if (totalCharCount != 1)
        {
            compressedString += input[startIndex];
            compressedString += (char)(totalCharCount + '0');
        }
        else
        {
            compressedString += input[startIndex];
        }
        startIndex = endIndex;
    }
    return compressedString;
}

int main()
{
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}
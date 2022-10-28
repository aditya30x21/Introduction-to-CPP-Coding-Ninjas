#include <iostream>
using namespace std;


// void removeConsecutiveDuplicates(char input[])
// {
//     for (int i = 1; input[i] != '\0'; i++)
//     {
//         if (input[i] == input[i - 1])
//         {
//             input[i - 1] = ' ';
//         }
//     }
//     int space = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         if (input[i] != ' ')
//         {
//             char tmp = input[i];
//             input[i] = input[space];
//             input[space] = tmp;
//             space++;
//         }
//     }
// }


void removeConsecutiveDuplicates(char str[])
{
    // Write your code here
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            continue;
        }
        else
        {
            str[count] = str[i];
            count++;
        }
    }
    str[count] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
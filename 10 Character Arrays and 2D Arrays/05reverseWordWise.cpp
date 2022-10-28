#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[], int start, int end)
{
    while (start < end)
    {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}
void reverseStringWordWise(char input[])
{
    int space = -1;
    int i = 0;
    for (i = 0; i < strlen(input);i++){
        if(input[i]==' '){
            reverse(input,space+1,i-1);
            space = i;
        }
    }
    reverse(input,space+1,i-1);
    reverse(input,0,i-1);
}

int main()
{
    char input[10000];
    cin.getline(input, 10000);
    reverseStringWordWise(input);
    cout << input << endl;
    return 0;
}
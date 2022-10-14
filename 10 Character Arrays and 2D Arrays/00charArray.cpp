#include <iostream>
#include <cstring>
using namespace std;
int length(char name[])
{
    int counter = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        counter++;
    }
    return counter;
}
int main()
{
    char input1[100];
    char input2[100];

    cin.getline(input1, 100);
    cin.getline(input2, 100);

    // cin>>name;
    // cout<<name<<endl;
    // cout<<name[0]<<endl;
    // cout<<length(name);

    //  -- TO GET STRING WITH SPACES
    // cin.getline(name,100,'o');
    // cout<<name;

    // INBUILT FUNCTIONS

    // strlen -- for length of array
    cout << "Length - " << strlen(input1) << endl;

    // strcmp -- to compare two strings
    cout << strcmp(input1, input2) << endl;

    // strcpy
    // strcpy(input1, input2);
    cout << "str1 " << input1 << " "<< "str2 " << input2 << endl;

    // strncpy
    strncpy(input1, input2, 5);
    cout << "str1 " << input1 << " "<< "str2 " << input2 << endl;
    return 0;
}

// input1 = abcd
// input2 = bacda
// output = false;

#include <iostream>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
    // Write your code here
    //     int count = 0;
    //     for(int i = 0;i<strlen(input1);i++){
    //         for(int j = 0;j<strlen(input2);j++){
    //             if(input1[i]==input2[j]){
    //             	input2[j] = -1;
    //                 count++;
    //                 break;

    //             }
    //         }
    //     }
    //     // cout<<count;
    //     if(strlen(input1)!=strlen(input2)){
    //         return false;
    //     }
    //     else if(strlen(input1) != count){
    //         return false;
    //     }
    //     else{
    //         return true;
    // 	}

    int freqArray[256] = {0};

    for (int i = 0; input1[i] != '\0'; i++)
    {
        int index = input1[i];
        freqArray[index]++;
    }

    for (int i = 0; input2[i] != '\0'; i++)
    {
        int index = input2[i];
        freqArray[index]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freqArray[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
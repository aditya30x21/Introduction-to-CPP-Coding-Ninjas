#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

char highestOccurringChar(char input[]) {
    // Write your code here
    int freq[256] = {0};

    for(int i = 0;input[i]!='\0';i++){
        int index = input[i];
        freq[index]++;
    }
    
    // cout<<freq[98]<<endl;
    int max = 0,index = -1;
    for(int i = 97;i<=122;i++){
        if(freq[i]>max){
            max = freq[i];
            index = i;
        }
    }
    // cout<<max;
    return char(index);
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
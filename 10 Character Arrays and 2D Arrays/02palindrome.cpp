#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    int i = 0, count = 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    int j = 0;
    int k = count-1;
    while(j<=k){
        if(str[j]==str[k]){
            j++;
            k--;
        }
        else{
            return false;
        }
	}
    return true;
    
}


int main() {
    int size = 100;
    char str[size];
    cin >> str;
    // checkPalindrome(str);
    cout << (checkPalindrome(str) ? "true" : "false");
}
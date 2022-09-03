#include <iostream>

using namespace std;

int main(){
    int rand = 15 & 30;
    int ror = 15 | 30;
    int rnot = ~15;
    int rxor = 15 ^ 30;
    int leftShift = 15 << 2;
    int rightShift = 15>>2;

    cout<<rand<<endl;
    cout<<ror<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<leftShift<<endl;
    cout<<rightShift<<endl;

    return 0;
}
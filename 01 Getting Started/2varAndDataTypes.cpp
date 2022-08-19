#include <iostream>
using namespace std;

int main(){

    int a = 21;
    int b = 30;
    int c = a + b;
    cout<<c<<" 4 Bytes"<<endl;
    
    char ch = 'S';
    cout<<ch<<" 1 Byte"<<endl;

    float f = 2.1;
    cout<<f<<" 4 Bytes"<<endl;

    double d = 93.10;
    cout<<d<<" 8 Bytes"<<endl;

    bool boo = true;
    cout<<boo<<" 1 Byte"<<endl;

    cout<<sizeof(boo)<<endl;
    return 0;
}
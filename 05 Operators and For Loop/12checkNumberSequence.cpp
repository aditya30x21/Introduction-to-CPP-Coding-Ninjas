#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int previous;
    cin>>previous;

    int count = 2, current;
    bool isDecreasing = true;
    while(count <= n){
        cin>>current;

        if(current == previous){
            cout<<"false";
            return 0;
        }
        count++;

        if(current < previous){
            if(isDecreasing == false){
                cout<<"false";
                return 0;
            }
        }
        else{
            if(isDecreasing == true){
                isDecreasing = false;
            }
        }
        previous = current;
    }
    cout<<"true";
}
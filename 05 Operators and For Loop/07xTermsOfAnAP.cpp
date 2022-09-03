// X TERMS OF AN AP NOT DIVISIBLE BY 4

// INPUT = 4
// OUTPUT = 5 11 14 17

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x;
	cin>>x;
	
	int count = 0;
	int n = 1;
	while(count<x){
	    
	     int term = (3*n)+2;
	     if(term%4!=0){
	         cout<<term<<" ";
	         count++;
	     }
	     n++;
	}
}

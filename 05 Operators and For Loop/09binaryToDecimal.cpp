#include <iostream>
using namespace std;

int main()
{
  // Write your code here
  int num;
  cin >> num;
  int decimal = 0, pow = 1;
  while (num > 0)
  {
    int last = num % 10;
    decimal += last * pow;
    pow *= 2;
    num = num / 10;
  }
  cout << decimal;
  return 0;
}
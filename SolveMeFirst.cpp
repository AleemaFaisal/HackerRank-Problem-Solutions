#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
    if (a<1 || a>1000 || b<1 ||b >1000)
    {
        cout<<"Input out of Bounds."<<endl;
        return -1;
    }
    else
        return (a+b);
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}

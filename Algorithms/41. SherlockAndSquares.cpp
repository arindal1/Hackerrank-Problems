#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,m;
  cin>>n;
  
  while (cin>>n>>m)
    {
        cout<<(int)(sqrt(m)+0.0000001)-(int)(sqrt(n-1)+0.0000001)<<endl;
    }
  return 0;
}

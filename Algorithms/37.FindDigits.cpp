
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int getR(string n, int q) {
    if(!q) return 0;
    int r = 0;
    for(int i = 0;i < n.length();++i) {
        r *= 10;
        r += (n[i] - '0');
        r %= q;
    }
    if(!r) return 1;
    return 0;
}


int main() { 
    int T;
    string n;
    int res = 0;
    
    cin >> T;
    while(T--) {
        cin >> n;
        
        res = 0;
        for(int i = 0;i < n.length();++i)
            res += getR(n, n[i] - '0');
        
        cout << res << endl;
    }
    
    return 0;
}

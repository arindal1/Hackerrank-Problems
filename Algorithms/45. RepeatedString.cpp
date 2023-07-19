#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MaxN = 100;

char s[MaxN + 1];

int main() {
    ll n;
    scanf ("%s", s);
    int len = (int)strlen(s);
    scanf ("%lld", &n);
    
    ll tot = n / len;
    
    ll as = 0;
    for (int i = 0; i < len; ++i)
        if (s[i] == 'a')
            ++as;
    
    ll res = tot * as;
    
    for (int i = 0; i < n % len; ++i) 
        if (s[i] == 'a')
            ++res;
    
    printf ("%lld", res);
    
}

#include <bits/stdc++.h>
using namespace std;

#define DEBUG(x)    cerr << #x << " = " << x << endl
#define INPUT       freopen("Data.inp", "r", stdin)
#define OUTPUT      freopen("Data.out", "w", stdout)

typedef long long LL;
typedef pair<int, int> II;
typedef vector<int> VI;

const int N = (int) 1e2 + 10;
int n, a[N], c[N];

int main() {
    #ifdef LOCAL
        INPUT;
        OUTPUT;
    #endif

    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i) c[a[i]]++;

    printf("%d", n - *max_element(c + 1, c + 101));
    return 0;
}

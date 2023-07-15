#include <bits/stdc++.h>

using namespace std;


int main() {
    int T;
    cin >> T;
    for(int t = 0; t<T; t++){
        int N;
        cin >> N;
        int ht = 1;
        for(int i=0;i<N;i++){
            if(i%2==0) ht*=2;
            else ht++;
        }
        cout << ht << endl;
    }
    return 0;
}

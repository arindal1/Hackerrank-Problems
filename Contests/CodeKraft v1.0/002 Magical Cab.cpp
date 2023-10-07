#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minStepsToReach(int x) {
    if (x == 0)
        return 0;

    vector<int> minSteps(x + 1, INT_MAX);
    int steps[] = {2, 5, 7};
    minSteps[0] = 0;

    for (int i = 1; i <= x; i++) {
        for (int step : steps) {
            if (i >= step && minSteps[i - step] != INT_MAX) {
                minSteps[i] = min(minSteps[i], minSteps[i - step] + 1);
            }
        }
    }
    return (minSteps[x] == INT_MAX) ? -1 : minSteps[x];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int x;
    cin >> x;

    int minSteps = minStepsToReach(x);
    cout << minSteps << endl;
    return 0;
}

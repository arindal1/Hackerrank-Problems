#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

void calculateMaxGoldAndBags(int n) {
    int maxGold = 1;
    int minBags = n;

    for (int k = 2; k <= n; k++) {
        int quotient = n / k;
        int remainder = n % k;
        int goldInEachBag = pow(quotient, k - remainder) * pow(quotient + 1, remainder);

        if (goldInEachBag > maxGold) {
            maxGold = goldInEachBag;
            minBags = k;
        }
    }

    std::cout << maxGold << " " << minBags << std::endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    std::cin >> n;  // Input the amount of gold
    calculateMaxGoldAndBags(n);
    return 0;
    return 0;
}

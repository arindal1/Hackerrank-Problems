#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    //Complete the code to calculate the sum of the five digits on n.
    int temp = n;
    while (temp != 0)
    {
        sum = sum + (temp%10);
        temp = temp/10;
    }
    printf("%d", sum);
    return 0;
}

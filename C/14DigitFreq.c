#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000];
    gets(str);  
    int num[] = {0,0,0,0,0,0,0,0,0,0};
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < strlen(str); j++) {
            if (i + '0' == str[j]) {
                num[i]++;
            }
        }    
        printf("%d ", num[i]);
    }   
    return 0;
}

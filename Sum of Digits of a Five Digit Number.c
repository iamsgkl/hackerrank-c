#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n, sum=0,t;
    scanf("%d", &n);
    for(int i=0;i<5;i++)
    {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    printf("%d", sum);
    return 0;
}

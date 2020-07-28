#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, diff;
    float x,y, sum1, diff1;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    sum=a+b; diff=a-b;
    sum1=x+y; diff1=x-y;
    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", sum1, diff1);
    return 0;
}

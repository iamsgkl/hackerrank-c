#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int i,co=1,sum=0;
    for(i=4;i<=n;i++)
    {
        if(co==1)
            a=a+b+c;
            sum=a;
            co++;
        if(co==2)
            b=a+b+c;
            sum=b;
            co++;
        if(co==3)
            c=a+b+c;
            sum=c;
            co=1;
    }
return sum;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

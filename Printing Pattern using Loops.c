#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);for(int i=n;i>=1;i--)
{
int k=n;
for(int sp=n;sp>i;sp--,k--)
{
printf("%d ",k);
}
for(int j=1;j<=2*i-1;j++)
{
printf("%d ",i);
}
int l=i+1;
for(int sp=n;sp>i;sp--,l++)
{
printf("%d ",l);
}
printf("\n");
}
for(int i=1;i<n;i++)
{
int k=n;
for(int sp=0;sp<n-i-1;sp++,k--)
{
printf("%d ",k);
}
for(int j=1;j<=2*(i+1)-1;j++)
{
printf("%d ",i+1);
}
int m=i+2;
for(int sp=0;sp<n-i-1;sp++,m++)
{

printf("%d ",m);
}

printf("\n");
}
}

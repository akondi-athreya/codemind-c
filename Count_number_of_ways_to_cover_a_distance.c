#include<stdio.h>
int countWays(int n)
{
    int d[n+1];
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;
    for(int i=3 ; i<=n ; i++){
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    return d[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    int z = countWays(n);
    printf("%d",z);
}
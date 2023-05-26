
#include<stdio.h>
int main()
{
    int l,b,w,a1,a2,s,c,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=(l+2*w)*(b+2*w);
    a2=l*b;
    s=a1-a2;
    cost=s*c;
    printf("%d",cost);
    return 0;
}
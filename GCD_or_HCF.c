#include<stdio.h>
int FindGcd(int a , int b){
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int Gcd = FindGcd(a,b);
    printf("%d",Gcd);
}
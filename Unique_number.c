#include<stdio.h>
int IsUnique(int n){
    int digitC[10] ={0};
    while(n>0){
        int digit = n%10;
        digitC[digit]++;
        if(digitC[digit] > 1){
            return 0;
            break;
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(IsUnique(n)){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}
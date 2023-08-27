#include<stdio.h>
int main()
{
    int n;
    float u,bill,charge=0;
    scanf("%d",&n);
    if(n<199) u=1.20;
    else if(n>=200 && n<400) u=1.40;
    else if(n>=400 && n<600) u=1.60;
    else if(n>=600 && n<800) u=1.80;
    else if(n>=800) u=2.00;
    bill = n*u;
    if(bill>400) charge=0.15*bill;
    printf("Units Consumed: %d
",n);
    printf("Cost per Unit: %.2f
",u);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",charge);
    printf("Total Amount: %.2f",bill+charge);
    
}
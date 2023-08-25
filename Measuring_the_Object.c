#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    if(x+y==w || x+z==w || y+z==w || x==w || y==w || z==w){
        printf("YES");
    }
    else printf("NO");
}
#include<stdio.h>
int main()
{
    int x,y,m,l=10;
    scanf("%d%d",&x,&y);
    m=x>y?x:y;
    l=m;
    while(1)
    {
        if(l%x==0&&l%y==0)
         {
             
             break;
         }
         l=l+m;
         
    }
    printf("%d",l);
    return 0;
}
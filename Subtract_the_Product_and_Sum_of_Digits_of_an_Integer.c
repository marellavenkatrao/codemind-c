#include<stdio.h>
int main()
{
    int n,r,s,p;
    s=0;p=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    printf("%d",p-s);
    return 0;
}
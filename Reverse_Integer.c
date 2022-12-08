#include<stdio.h>
#include<math.h>
int main()
{
    int s,n,r,g=1;;
    scanf("%d",&n);
    s=0;
    if(n<0)
    g=-1;
    n=abs(n);
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
            }
            printf("%d",s*g);
            return 0;
}
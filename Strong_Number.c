#include<stdio.h>
int main()
{
    int n,no,r,f,s=0,i;
    scanf("%d",&n);
    no=n;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        f=f*i;
        s=s+f;
        n=n/10;
    }
    if(no==s)
    printf("The number %d is a strong number",no);
    else
    printf("The number %d is not a strong number",no);
    return 0;
}
#include<stdio.h>
int main()
{
    int l,b,w,p;
    scanf("%d%d%d%d",&l,&b,&w,&p);
    printf("%d",(((l+2*w)*(b+2*w))-(l*b))*p);
    return 0;
}
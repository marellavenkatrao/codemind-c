#include<stdio.h>
int main()
{
    int n,i,j,r;
    scanf("%d",&n);
    r=n;
    for(i=1;i<=n;i++)
    {
     for(j=n;j>=n-(i-2);j--)
        printf("%d ",j);
        for(j=1;j<=2*r-1;j++)
        printf("%d ",r);
        for(j=n-(i-2);j<=n;j++)
        printf("%d ",j);
        printf("
");
        r--;
    }
    for(i=1;i<n;i++)
    {
        for(j=n;j>i;j--)
        printf("%d ",j);
        for(j=1;j<=2*i-1;j++)
        printf("%d ",i+1);
        for(j=i+1;j<=n;j++)
        printf("%d ",j);
        printf("
");
    }

}
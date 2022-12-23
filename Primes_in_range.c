#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i,c=0;
    int n1=sqrt(n);
    for(i=1;i<=sqrt(n);i++)
    {
         if(n%i==0)
         c+=2;
    }
    if(n==n1*n1)
    c--;
    if(c==2)
     return 1;
     else return 0;
}
int main()
{
    int x,y,i,c=0;
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    if(isprime(i))
     c++;
    printf("%d",c);
    return 0;
}
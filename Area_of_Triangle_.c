#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    printf("%.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}
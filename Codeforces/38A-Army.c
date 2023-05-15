#include<stdio.h>
int main()
{
    int a,b,n,d[105],i,j,temp,sum=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        sum=sum+d[i-1];
    }
    printf("%d",sum);
    return 0;
}

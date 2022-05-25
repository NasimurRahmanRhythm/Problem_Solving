#include<stdio.h>
int main()
{
    int n,i,s,p;
    scanf("%d",&n);
    printf("2 ");
    s=1;
    p=2;
    for(i=0;i<n-2;i++)
    {
        s=s+1;
        p=s+p;
        if(p<=n)
        {
            printf("%d ",p);
        }
        else
        {
            p=p-n;
            printf("%d ",p);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[505],i,n,k=1;
    for(i=0;i<500;i++)
    {
        a[i]=(k*(k+1))/2;
        k++;
    }
    scanf("%d",&n);
    for(i=0;i<500;i++)
    {
        if(a[i]==n)
        {
            printf("YES");
            break;
        }
        else
        {
            if(i==n-1)
            {
                printf("NO");
                break;
            }
        }
    }
}

#include<stdio.h>
int main()
{
    long long int n,i,r=0,m=5,t=2,k=1,w;
    scanf("%lld",&n);
    for(i=0;i<n;i=i+m)
    {
        if(i==0)
        {
            m=5;
            t=2;
            r=0;
        }
        else
        {
            r=r+m;
            m=m*2;
            t=t*2;

        }
    }
    w=t/2;
    if((n-r)/w==0 || n==1)
    {
        printf("Sheldon");
    }
    else if((n-r)/w==1 || n==2)
    {
        printf("Leonard");
    }
    else if((n-r)/w==2 || n==3)
    {
        printf("Penny");
    }
    else if((n-r)/w==3 || n==4)
    {
        printf("Rajesh");
    }
    else
    {
        printf("Howard");
    }
}

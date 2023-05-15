#include<stdio.h>
#include<math.h>
int main()
{
    long long int m,n,a;
    scanf("%lld%lld%lld",&m,&n,&a);
    if(m%a==0 && n%a==0)
    {
        printf("%lld",(m/a)*(n/a));
    }
    else if(m%a==0 && n%a!=0)
    {
        printf("%lld",((n/a)+1)*(m/a));
    }
    else if(m%a!=0 && n%a==0)
    {
        printf("%lld",(n/a)*((m/a)+1));
    }
    else
    {
        printf("%lld",((m/a)+1)*((n/a)+1));
    }
    return 0;
}

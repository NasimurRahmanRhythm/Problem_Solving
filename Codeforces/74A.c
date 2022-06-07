#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,p,m,a,b,c,d,e,sum[55],j,temp;
    char s[25][55],t[25][55];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        scanf("%d%d%d%d%d%d%d",&p,&m,&a,&b,&c,&d,&e);
        sum[i]=p*100-m*50+a+b+c+d+e;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(sum[i]<sum[j])
            {
                temp=sum[i];
                strcpy(t[i],s[i]);
                sum[i]=sum[j];
                strcpy(s[i],s[j]);
                sum[j]=temp;
                strcpy(s[j],t[i]);
            }
        }
    }
    printf("%s",s[0]);
    return 0;
}

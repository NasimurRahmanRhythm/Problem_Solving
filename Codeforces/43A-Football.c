#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,cnt,cnt1,m;
    char a[1300][1030],b[1300],c[1300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    cnt=0;
    cnt1=0;
    for(j=0;j<n;j++)
    {
        m=strcmp(a[0],a[j]);
        if(m==0)
        {
            strcpy(c,a[j]);
            cnt++;
        }
        if(m!=0)
        {
            cnt1++;
            strcpy(b,a[j]);
        }
    }

    if(cnt>cnt1)
    {
        printf("%s",c);
    }
    if(cnt1>cnt)
    {
        printf("%s",b);
    }
    return 0;
}

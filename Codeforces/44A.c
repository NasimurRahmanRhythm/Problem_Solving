#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,cnt,a;
    char s[100][30];
    scanf("%d ",&a);
    cnt=a;
    for(i=0;i<a;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            n=strcmp(s[i],s[j]);
            if(n==0)
            {
                cnt--;
                break;
            }
        }
    }
    printf("%d",cnt);
}

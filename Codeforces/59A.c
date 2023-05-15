#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,cnt1,cnt2;
    char s[125];
    scanf("%s",s);
    cnt1=0;
    cnt2=0;
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>=65 && s[i]<=92)
            cnt1++;
        if(s[i]>=97 && s[i]<=122)
            cnt2++;
    }
    for(i=0;i<=strlen(s);i++)
    {
        if(cnt1<=cnt2)
        {
            if(s[i]>=65 && s[i]<=92)
            {
                s[i]=s[i]+32;
            }
        }
        else
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
    }
    printf("%s",s);
}

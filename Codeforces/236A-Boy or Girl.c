#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,cnt;
    char s[105];
    scanf("%s",s);
    cnt=1;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]!=s[j])
            {
                if(s[j+1]=='\0')
                {
                    cnt++;
                }
            }
            else
            {
                break;
            }
        }
    }
    if(cnt%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}

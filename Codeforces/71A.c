#include<stdio.h>
#include<string.h>
int main()
{
    char a[105][105];
    int n,i;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(strlen(a[i])>10)
        {
            printf("%c%d%c\n",a[i][0],strlen(a[i])-2,a[i][strlen(a[i])-1]);
        }
        else
        {
            printf("%s\n",a[i]);
        }
    }
}

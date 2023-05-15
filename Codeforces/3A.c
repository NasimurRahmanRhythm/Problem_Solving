#include<stdio.h>
int main()
{
    int a1,a2,cnt,i,j;
    char c1,c2;
    scanf("%c%d%c%d",&c1,&a1,&c2,&a2);
    int k=(int)'c1';
    int l=(int)'c2';
    if(a1<a2 && k<l)
    {
        cnt=0;
        for(i='c1';i<'c2';i++)
        {
            printf("R");
            for(j=a1;j<a2;j++)
        {
            printf("U");
            cnt++;

        }
        }
        printf("%d",cnt);
    }
    if(a1<a2 && 'c1'>'c2')
    {
        cnt=0;
        for(i='c2';i<'c1';i++)
        {
            printf("L");
            cnt++;
        }
        for(j=a1;j<a2;j++)
        {
            printf("U");
            cnt++;
        }
        printf("%d",cnt);
    }
    if(a1>a2 && 'c1'<'c2')
    {
        cnt=0;
        for(i='c1';i<'c2';i++)
        {
            printf("R");
            cnt++;
        }
        for(j=a2;j<a1;j++)
        {
            printf("D");
            cnt++;
        }
        printf("%d",cnt);
    }
    if(a1>a2 && 'c1'>'c2')
    {
        cnt=0;
        for(i='c2';i<'c1';i++)
        {
            printf("L");
            cnt++;
        }
        for(j=a2;j<a1;j++)
        {
            printf("D");
            cnt++;
        }
        printf("%d",cnt);
    }
    return 0;
}



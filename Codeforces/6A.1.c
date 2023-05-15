#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(((a+b)>c && c>=a && c>=b) || ((a+b)>d && d>=a && d>=b) || ((a+c)>b && b>=a && b>=c)|| ((a+c)>d && d>=a &&d>=c) || ((a+d)>b && b>=a && b>=d) || ((a+d)>c && c>=d && c>=a) || ((b+c)>a && a>=b && a>=c) || ((b+c)>d  && d>=c && d>=b)|| ((b+d)>a && a>=b && a>=d) || ((b+d)>c && c>=d && c>=b) || ((c+d)>a && a>=c && a>=d) || ((c+d)>b && b>=c && b>=d))
    {
        printf("TRIANGLE");
    }
    else if((a+b)==c || (a+b)==d || (a+c)==b || (a+c)==d || (a+d)==b || (a+d)==c || (b+c)==a || (b+c)==d || (b+d)==a || (b+d)==c || (c+d)==a || (c+d)==b)
    {
        printf("SEGMENT");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    return 0;
}

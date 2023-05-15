#include<stdio.h>
int main(void)
{
    double x,y;
    printf("Enter your temperature in Farenheit=");
    scanf("%lf",&x);
    y=(x-32)*5/9;
    printf("Your temperature in Celsius is = %f",y);
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,n,m,k=0,cnt=0,a[3005],h,l;
    scanf("%d",&n);

        for(j=2;j*j<=n;j++)
        {
            if(n%j==0)
            {
                m=n/j;
                a[k]=m;
                a[k+1]=j;
                k=k+2;
            }
        }
        for(h=0;h<k;h++)
        {
            for(l=h+1;l<k;l++)
            {
                if(a[h]==a[l])
                {
                    break;
                }
            }
            if(h==k-1)
            {
                cnt++;
            }
        }

    printf("%d",cnt);
}

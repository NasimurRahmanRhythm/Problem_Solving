#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,cnt;
    scanf("%lld%lld",&n,&k);
    cnt=n/k;
    if(cnt%2!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

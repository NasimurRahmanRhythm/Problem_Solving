#include<bits/stdc++.h>
using namespace std;
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll n;
    scl(n);
    ll a[n+5];
    LOOP(i,n)
    {
        scl(a[i]);
    }
    ll ans[n+5];
    memset(ans,0,sizeof(ans));
    for(ll i=0;i<n;i++)
    {
        ans[i]=1;
        for(ll j=i;j<n-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                ans[i]++;
                //flag=1;
            }
            else
            {
                break;
            }
        }
        for(ll k=i;k>0;k--)
        {
            if(a[k]>=a[k-1])
            {
                ans[i]++;
            }
            else
            {
                break;
            }
        }
    }
    sort(ans,ans+n);
    cout << ans[n-1] << endl;
}


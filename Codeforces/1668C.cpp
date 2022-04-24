#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scl3(a,b,c)          scanf("%lld%lld%lld",&a,&b,&c);
#define scl2(a,b)            scanf("%lld%lld",&a,&b)
#define scd(n)               scanf("%lf",&n)
#define pf(n)                printf("%lld\n",n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define pll                  pair<long long,pair<long long,long long>>
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define f first
#define s second
int main()
{
    ll n;
    scl(n);
    vector<ll>a;
    ll x;
    ll b[n+5];
    LOOP(i,n)
    {
        scl(x);
        a.pb(x);
    }
    ll ans=1e18+10;
    for(ll k=0;k<n;k++)
    {
        ll sum=0;
        for(ll i=k;i<n;i++)
        {
            if(i==k)
            {
                b[i]=0;
            }
            if(i!=k)
            {
                x=b[i-1]/a[i];
                ll m=(x+1)*a[i];
                b[i]=m;
                sum=sum+x+1;
            }
            //cout << b[i] << " ";
        }
        for(ll i=k-1;i>=0;i--)
        {
            x=b[i+1]/a[i];
            ll m=(x+1)*a[i];
            b[i]=m;
            sum=sum+x+1;
        }
        ans=min(ans,sum);
    }
    cout << ans << "\n";
}


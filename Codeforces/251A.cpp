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
    ll n,d;
    scl2(n,d);
    ll x;
    vector<ll>v;
    LOOP(i,n)
    {
        scl(x);
        v.pb(x);
    }
    srt(v);
    ll ans=0,k;
    LOOP(i,n)
    {
        k=upper_bound(v.begin(),v.end(),v[i]+d)-v.begin();
        //cout << k << "\n";
        k=k-i-1;

        ll m=(k*(k-1))/2;
        //cout << m << "\n";
        if(m>0)
        {
            ans=ans+m;
        }
    }
    cout << ans << "\n";
}


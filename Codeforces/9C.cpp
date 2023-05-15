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
    vector<ll>v;
    FOR(i,1023)
    {
        ll k=i,j=0;
        ll a[13];
        while(k!=0)
        {
            ll r=k%2;
            k=k/2;
            a[j]=r;
            j++;
        }
        ll ans=0;
        for(ll p=j-1;p>=0;p--)
        {
            ans=10*ans+a[p];
        }
        v.pb(ans);
    }
    ll n;
    scl(n);
    //for(auto x:v)cout << x << "\n";
    ll ans=lower_bound(v.begin(),v.end(),n)-v.begin();
    if(v[ans]==n)ans++;
    pf(ans);
}


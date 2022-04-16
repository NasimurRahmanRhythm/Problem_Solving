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
    ll s,n;
    scl2(s,n);
    vector<ll>p,ans;
    ll d=1;
    while(1)
    {
        p.pb(d);
        d=d*2;
        if(d>=100000)break;
    }
    for(ll i=n;i>0;i--)
    {
        ll x=i;
        ll y=-1;
        for(ll j=p.size()-1;j>=0;j--)
        {
            if(p[j]<=x)
            {
                x=x-p[j];
                y=pow(2,j);
            }
        }
        if(y<=s && y!=-1)
        {
            s=s-y;
            ans.pb(i);
            if(s==0)break;
        }
    }
    if(!s)
    {
        cout << ans.size() << "\n";
        for(auto x:ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}


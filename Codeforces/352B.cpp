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
    ll n,x;
    scl(n);
    map<ll,ll>mp;
    vector<ll>v,p[100005];
    FOR(I,n)
    {
        scl(x);
        if(mp[x]==0)
        {
            v.pb(x);
            mp[x]++;
        }
        p[x].pb(I);
    }
    ll flag=0;
    //cout << "X\n";
    vector<pl>ans;
    LOOP(i,v.size())
    {
        if(p[v[i]].size()==1)
        {
            ans.pb({v[i],0});
            //cout << "X\n";
            continue;
        }
        ll diff=p[v[i]][1]-p[v[i]][0];
        if(p[v[i]].size()==2)
        {
            ans.pb({v[i],diff});
            continue;
        }
        flag=0;
        for(ll j=2;j<p[v[i]].size();j++)
        {
            if(diff!=p[v[i]][j]-p[v[i]][j-1])
            {
                flag=1;
                break;
            }
        }
        if(!flag)ans.pb({v[i],diff});
    }
    srt(ans);
    cout << ans.size() << "\n";
    for(auto x: ans)
    {
        cout << x.f << " " << x.s << "\n";
    }
}


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
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define f first
#define s second
int main()
{
    ll n;
    vector<pl>v;
    ll x,y;
    scl(n);
    LOOP(i,n)
    {
        scl2(x,y);
        v.pb({x,y});
    }
    srt(v);
    ll flag=0,mn1=-1,mn2=-1;
    for(ll i=0;i<n;i++)
    {
        if(v[i].f>mn1)
        {
            mn1=v[i].s;
        }
        else if(v[i].f>mn2)
        {
            mn2=v[i].s;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag)cout << "NO\n";
    else cout << "YES\n";
}


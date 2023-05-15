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
    ll n,a;
    scl2(n,a);
    ll x,y,mx=0,my=INT_MAX,ax,ay;
    LOOP(i,n)
    {
        scl2(x,y);
        ax=min(x,y);
        ay=max(x,y);
        mx=max(mx,ax);
        my=min(my,ay);
    }
    //cout << mx << " " << my << "\n";
    if(mx>my)
    {
        cout << "-1\n";
    }
    else if(mx<=a && a<=my)
    {
        cout << "0\n";
    }
    else if(mx>a)
    {
        cout << mx-a << "\n";
    }
    else
    {
        cout << a-my << "\n";
    }
}


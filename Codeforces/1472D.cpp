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
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        vector<ll>v(n);
        LOOP(i,n)
        {
            scl(v[i]);
        }
        ll a=0,b=0;
        srt(v);
        rvs(v);
        LOOP(i,n)
        {
            if(i%2==0)
            {
                if(v[i]%2==0)a=a+v[i];
            }
            else
            {
                if(v[i]%2==1)b=b+v[i];
            }
        }
        if(a>b)cout << "Alice\n";
        else if(a==b)cout << "Tie\n";
        else cout << "Bob\n";
    }
}


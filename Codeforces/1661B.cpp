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
    vector<ll>ans;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        if(n==0)
        {
            ans.pb(0);
            continue;
        }
        ll x=n,i,j,k,mn=15;
        for(i=0;i<=15;i++)
        {
            ll flag=0;
            x=n;
            for(k=0;k<i;k++)
            {
                x=x+1;
                x=x%32768;
                if(x==0)
                {
                    flag=1;
                    break;
                }
            }
            j=0;
           // cout << x << " " << i << "\n";
            if(flag)
            {
                mn=min(mn,i+j);
                continue;
            }
            //j=0;
            for(k=0;k<15-i;k++)
            {
                x=x*2;
                x=x%32768;
                j++;
                if(x==0)
                {
                    break;
                }
            }
            mn=min(mn,i+j);
        }
        ans.pb(mn);
    }
    for(auto x:ans)cout << x << " ";
    cout << "\n";
}


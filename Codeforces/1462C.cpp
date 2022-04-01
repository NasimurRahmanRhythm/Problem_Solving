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
    ll a[15];
    for(ll i=1;i<=9;i++)
    {
        a[i]=(i*(i+1))/2;
    }
    while(t--)
    {
        ll n;
        scl(n);
        if(n>45)
        {
            cout << "-1\n";
            continue;
        }
        if(n/10==0)
        {
            cout << n << "\n";
            continue;
        }
        ll m=n;
        string ans;
        for(ll i=9;i>=1;i--)
        {
            m=n;
            for(ll j=9;j>=1;j--)
            {
                if(m>=j && m!=0)
                {
                    m=m-j;
                    ans.pb(j+'0');
                }
            }
            if(m==0)
            {
                break;
            }
            else
            {
                ans.clear();
            }
        }
        rvs(ans);
        cout << ans << "\n";
    }
}


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
        ll a[n+5],b[n+5];
        LOOP(i,n)
        {
            scl(a[i]);
        }
        ll x=10e11;
        LOOP(i,n)
        {
            scl(b[i]);
            if(b[i]!=0)
            {
                x=a[i]-b[i];
            }
        }
        if(x==10e11)
        {
            cout << "Yes\n";
            continue;
        }
        ll flag=0;
        LOOP(i,n)
        {
            if(a[i]<b[i])
            {
                flag=1;
                break;
            }
            if(b[i]==0)
            {
                if(a[i]-b[i]>x)
                {
                    flag=1;
                    break;
                }
            }
            else if(a[i]-b[i]!=x)
            {
                flag=1;
                break;
            }
        }
        if(flag)cout << "No\n";
        else cout << "Yes\n";
    }
}


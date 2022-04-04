#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll n,k;
        scl(n);
        scl(k);
        vector<ll>a,b;
        ll x;
        LOOP(i,n)
        {
            scl(x);
            a.pb(x);
        }
        LOOP(i,n)
        {
            scl(x);
            b.pb(x);
        }
        srt(a);
        srt(b);
        rvs(b);
        ll sum=0,cnt=0;
        LOOP(i,k)
        {
            if(b[i]>a[i])
            {
                sum=sum+b[i];
                cnt++;
            }
        }
        for(ll i=cnt;i<n;i++)
        {
            sum=sum+a[i];
        }
        cout << sum << "\n";
    }
}


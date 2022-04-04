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
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(a>b && d>=c)
        {
            cout << "-1\n";
            continue;
        }
        ll x=a-b;
       // cout << x << "\n";
        if(x<=0)
        {
            cout << b << "\n";
            continue;
        }
        ll y=c-d;
        ll m;
       // cout << y << "\n";
        if(x%y==0)
        {
            m=x/y;
        }
        else
        {
            m=x/y;
            m++;
        }
       // cout << m << "\n";
        ll ans=b+m*c;
        cout << ans << "\n";
    }
}


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
    ll t;
    scl(t);
    while(t--)
    {
        ll n,k;
        scl2(n,k);
        ll a[n+5];
        vector<ll>v;
        ll flag=0;
        LOOP(i,n)
        {
            scl(a[i]);
            ll b=a[i]%k;
            if(b!=0)
            {
                flag=1;
                b=k-b;
            }
            v.pb(b);
        }
        if(flag==0)
        {
            cout << "0\n";
            continue;
        }
        vector<ll>s;
        srt(v);
        s.pb(v[0]);
        ll f=1;
        for(ll i=1;i<n;i++)
        {
            if(v[i]==v[i-1] && v[i]!=0)
            {
                s.pb(v[i]+f*k);
                f++;
            }
            else
            {
                s.pb(v[i]);
                f=1;
            }
        }
        srt(s);
        /*LOOP(i,s.size())
        {
            cout << s[i] << " ";
        }
        cout << "\n";*/
        ll ans=s[0];
        for(ll i=1;i<n;i++)
        {
            ans=ans+s[i]-s[i-1];
        }
        cout << ans+1 << "\n";
    }
}


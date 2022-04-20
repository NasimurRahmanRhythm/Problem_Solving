#include<bits/stdc++.h>
using namespace std;
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        vector<ll>v;
        ll x;
        map<ll,ll>mp;
        LOOP(i,n)
        {
            scl(x);
            mp[x]++;
            if(mp[x]==2)
            {
                v.pb(x);
                mp[x]=0;
            }
        }
        double d,mn;
        ll ans1,ans2;
        sort(v.begin(),v.end());
        LOOP(i,v.size()-1)
        {
            d=(v[i+1]*1.0/v[i])+(v[i]*1.0/v[i+1]);
            if(v[i]==v[i+1])
            {
                ans1=v[i];
                ans2=v[i+1];
                break;
            }
           // cout << d << "\n";
            if(i==0)
            {
                mn=d;
                ans1=v[i];
                ans2=v[i+1];
                continue;
            }
            if(mn>d)
            {
                mn=d;
                ans1=v[i];
                ans2=v[i+1];
            }
        }
        cout << ans1 << " " << ans1 << " " << ans2 << " " << ans2 << "\n";
    }
}


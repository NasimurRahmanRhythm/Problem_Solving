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
#define pi acos(-1.0)
#define f first
#define s second
int main()
{
    ll n;
    scl(n);
    ll x;
    vector<ll>a;
    map<ll,ll>mp,mp2;
    LOOP(i,n)
    {
        scl(x);
        a.pb(x);
        mp[a[i]]++;
    }
    srt(a);
    rvs(a);
    ll ans=0;
    LOOP(i,n)
    {
        if(mp2[a[i]+1]==0)
        {
            ans++;
            mp2[a[i]+1]++;
        }
        else if(mp2[a[i]]==0)
        {
            ans++;
            mp2[a[i]]++;
        }
        else if(a[i]!=1 && mp2[a[i]-1]==0)
        {
            ans++;
            mp2[a[i]-1]++;
        }
    }
    cout << ans << "\n";
}


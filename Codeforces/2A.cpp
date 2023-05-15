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
    map<string,ll>mp1,mp2;
    ll n;
    scl(n);
    vector<pair<string,ll>>v;
    string s;
    ll x;
    LOOP(i,n)
    {
        cin >> s >> x;
        v.pb({s,x});
        mp1[s]=mp1[s]+x;
    }
    ll mx=0;
    for(auto p:mp1)
    {
        mx=max(mx,p.s);
    }
    LOOP(i,n)
    {
        mp2[v[i].f]+=v[i].s;
        if(mp2[v[i].f]>=mx && mp1[v[i].f]==mx)
        {
            cout << v[i].f << "\n";
            break;
        }
    }
}


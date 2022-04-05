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
#define pll                   pair<long long,pair<long long,long long>>
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
bool cmp(pll &a, pll &b)
{
    if(a.f==b.f)
        return a.s.f<b.s.f;
    else
       return a.f>b.f;
}
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        ll a[n+5];
       // memset(a,0,sizeof(a));
        queue<pll>q;
        vector<pll>v;
        ll l=1,h=n,mid;
        q.push({h-l+1,{l,h}});
        //cout << "X\n";
        while(!q.empty())
        {
            pll k=q.front();
            q.pop();
            v.pb(k);
            ll x=k.f;
            ll y=k.s.f;
            ll z=k.s.s;
           // cout << "X\n";
            if(x==1)
                continue;
            else if(x%2==1)
                mid=(y+z)/2;
            else
                mid=(y+z-1)/2;
            l=y,h=mid-1;
            //cout << "X\n";
            if(y!=mid)
                q.push({h-l+1,{l,h}});
            l=mid+1,h=z;
            if(z!=mid)
                q.push({h-l+1,{l,h}});
        }
        sort(v.begin(),v.end(),cmp);
        for(ll i=0;i<v.size();i++)
        {
            pll k=v[i];
            ll x=k.f;
            ll y=k.s.f;
            ll z=k.s.s;
            if(x%2)
                a[(y+z)/2]=i+1;
            else
                a[(y+z-1)/2]=i+1;
        }
        FOR(i,n)
            cout << a[i] << " ";
        cout << "\n";
    }
}


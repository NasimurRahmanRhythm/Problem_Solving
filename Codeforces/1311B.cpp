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
        ll n,m;
        scl(n);
        scl(m);
        ll a[n+5];
        ll b[m+5];
        map<ll,ll>mp;
        FOR(i,n)
        {
            scl(a[i]);
        }
        FOR(i,m)
        {
            scl(b[i]);
            mp[b[i]]=1;
        }
        ll flag;
        for(;;)
        {
            flag=0;
            for(ll i=1;i<n;i++)
            {
                if(mp[i]==1 && a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                    flag=1;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        flag=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                cout << "NO\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout << "YES\n";
        }
    }
}


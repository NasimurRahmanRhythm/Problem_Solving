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
    ll n,m;
    scl(n);
    scl(m);
    ll a[n+5][m+5],b[n+5][m+5];
    FOR(i,n)
    {
        FOR(j,m)
        {
            scl(a[i][j]);
        }
    }
    memset(b,0,sizeof(b));
    ll flag=0;
    vector<pl>v;
    FOR(i,n-1)
    {
        FOR(j,m-1)
        {
            if(a[i][j]==1)
            {
                if(a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1)
                {
                    b[i][j]=1;
                    b[i+1][j]=1;
                    b[i][j+1]=1;
                    b[i+1][j+1]=1;
                    v.pb({i,j});
                }
            }
        }
    }
    FOR(i,n)
    {
        FOR(j,m)
        {
            if(a[i][j]!=b[i][j])
            {
                cout << "-1\n";
                return 0;
            }
        }
    }
    cout << v.size() << "\n";
    LOOP(i,v.size())
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}


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
    ll n;
    scl(n);
    if(n==1 || n==2)
    {
        cout << "-1\n";
        return 0;
    }
    if(n==3)
    {
        cout << "210\n";
        return 0;
    }
    ll x=1;
    LOOP(i,n-1)
    {
        x=x*10;
        x=x%210;
    }
    ll k=210-x;
    cout << "1";
    LOOP(i,n-4)
        cout << "0";
    if(k>=100)
    {
        cout << k << "\n";
    }
    else if(k>=10)
    {
        cout << "0" << k << "\n";
    }
    else
    {
        cout << "00" << k << "\n";
    }
}


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
#define pf(n)                printf("%lld\n",n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define pll                  pair<long long,pair<long long,long long>>
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
    ll a=0,b=0;
    ll x;
    LOOP(i,n)
    {
        scl(x);
        if(x==5)a++;
        if(x==0)b++;
    }
    ll y=a/9;
    if(y==0)
    {
        if(b==0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << "0\n";
        }
        return 0;
    }
    if(b==0)
    {
        cout << "-1\n";
        return 0;
    }
    a=y*9;
    LOOP(i,a)cout << "5";
    LOOP(I,b)cout << "0";
    cout << "\n";
}


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
#define mod 1000000007
vector<ll>pal;
ll table[600][40010];
bool palindrome(ll a)
{
    ll r=0,n=a;
    while(a>0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    if(r==n)return true;
    else return false;
}
void p()
{
    for(ll i=1;i<=40005;i++)
    {
        if(palindrome(i)==true)pal.pb(i);
    }
}
ll dp(ll m,ll n)
{
    if(n==0)
        return 1;
    if(n<pal[m])
        return 0;
    if(m>pal.size())
        return 0;
    if(table[m][n]!=-1)
    {
        return table[m][n];
    }
    return table[m][n]=((dp(m+1,n))%mod +
           (dp(m,n-pal[m]))%mod)%mod;
}
int main()
{
    p();
    memset(table,-1,sizeof(table));
    ll x=pal.size();
    //cout << x << "\n";
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        ll ans=dp(0,n);
        pf(ans);
    }
}


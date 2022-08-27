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
string f(string a, ll b)
{
    string ans="";
    LOOP(i,b)
    {
        ans=ans+a;
    }
    return ans;
}
int main()
{
    ll m;
    scl(m);
    while(m--)
    {
        string s,t;
        cin >> s >> t;
        ll p=s.size(),q=t.size();
        ll g=__gcd(p,q);
        if(f(s,q/g)==f(t,p/g))
        {
            cout << f(s,q/g) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}


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
    string s;
    cin >> s;
    ll cnt=0;
    LOOP(i,s.size())
    {
        if(s[i]=='4' || s[i]=='7')cnt++;
    }
    ll flag=0;
    if(cnt==0)
    {
        cout << "NO\n";
        return 0;
    }
    while(cnt!=0)
    {
        ll r=cnt%10;
        cnt=cnt/10;
        if(r!=4 && r!=7)
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}


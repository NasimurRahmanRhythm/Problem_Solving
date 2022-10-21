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
    ll t;
    scl(t);
    while(t--)
    {
        ll n,k;
        string s;
        scl2(n,k);
        cin >> s;
        vector<pl>v;
        ll mx=0,p=-1,x;
        LOOP(i,n)
        {
            if(i==0 && s[i]=='B')
            {
                x=i;
            }
            if(s[i]=='B' && s[i-1]=='W')
            {
                x=i;
            }
            if(s[i]=='W' && s[i-1]=='B')
            {
                if(mx<i-x)
                {
                    mx=i-x;
                    p=x;
                }
            }
        }
        if(p==-1)
        {
            if(s[0]=='W')cout << k << "\n";
            else cout << "0\n";
            continue;
        }
       // cout << mx << " " << p << "\n";
        if(mx>=k)
        {
            cout << "0\n";
            continue;
        }
        ll q=0,ans=0;
        for(ll i=p;i<n;i++)
        {
            if(s[i]=='W')
            {
                ans++;
            }
            q++;
            if(q==k)break;
        }
       // cout << q << "\n";
        if(q!=k)
        {
            for(ll i=p-1;i>=0;i--)
            {
                if(s[i]=='W')
                {
                    ans++;
                }
                q++;
                if(q==k)break;
            }
        }
        pf(ans);
    }
}


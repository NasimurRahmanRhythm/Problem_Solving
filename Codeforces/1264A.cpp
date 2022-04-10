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
        ll n;
        scl(n);
        vector<ll>v;
        //set<ll>s;
        map<ll,ll>mp,mp1;
        ll x;
        LOOP(i,n)
        {
            scl(x);
            v.pb(x);
            mp[x]++;
            //s.insert(x);
        }
        if(n<10)
        {
            cout << "0 0 0\n";
            continue;
        }
        ll p=n/2;
        ll ans[3];
        ans[0]=INT_MAX,ans[1]=INT_MAX,ans[2]=INT_MAX;
        ll cnt=0;
        ll s=0,m=0,flag1=0,flag2=0,y=0;
        for(auto x:v)
        {
            //p=p-mp[x];
            mp1[x]++;
            if(mp1[x]>1)continue;
            if(cnt==0)
            {
                ans[cnt]=mp[x];
                cnt++;
                m=m+ans[0];
                continue;
            }
            if(cnt==1)
            {
                s=s+mp[x];
                if(s>ans[0])
                {
                    ans[1]=s;
                    cnt++;
                    m=m+ans[1];
                    s=0;
                    flag2=1;
                    continue;
                }
            }
            if(cnt==2)
            {
                s+=mp[x];
                m+=mp[x];
                //cout << s << " " << m << " " << mp[x] << "\n";
                if(m==p)
                {
                    if(s>ans[0])
                    {
                        ans[2]=s;
                        flag1=1;
                        break;
                    }
                    break;
                }
                if(m>p)
                {
                    if(s-mp[x]>ans[0])
                    {
                        ans[2]=s-mp[x];
                        flag1=1;
                        break;
                    }
                    break;
                }
                //y=mp[x];
            }
        }
        //cout << cnt << " c\n";
        if(flag1==0 || flag2==0)
        {
            cout << "0 0 0\n";
        }
        else
        {
            cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
        }
    }
}


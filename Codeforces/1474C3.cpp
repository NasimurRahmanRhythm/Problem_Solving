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
        ll n;
        scl(n);
        ll a[2*n+5];
        multiset<ll>st,st1;
        LOOP(i,2*n)
        {
            scl(a[i]);
            st1.insert(a[i]);
        }
        sort(a,a+2*n);
        ll ans1;
        vector<pl>ans;
        for(ll i=0;i<2*n-1;i++)
        {
            ll sum=a[2*n-1]+a[i];
            ans1=sum;
            //multiset<ll>st;
            st=st1;
            ans.clear();
            while(!st.empty())
            {
                auto it=st.end();
                it--;
                ll p=*it;
                ll x=sum-p;
                st.erase(it);
                if(st.find(x)==st.end())break;
               // ll p=*it;
                st.erase(st.find(x));
                ans.pb({p,x});
                sum=p;
            }
            if(st.empty())break;
        }
        if(st.empty())
        {
            cout << "YES\n";
            cout << ans1 << "\n";
            for(auto x:ans)cout << x.f << " " << x.s << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}





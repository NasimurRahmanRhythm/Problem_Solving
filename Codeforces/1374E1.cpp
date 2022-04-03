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
    ll n,k;
    scl2(n,k);
    ll t,b,a;
    priority_queue<ll,vector<ll>, greater<ll>>pq,p,q;
    LOOP(i,n)
    {
        scl3(t,a,b);
        if(a==1 && b==1)pq.push(t);
        else if(a==1) p.push(t);
        else if(b==1) q.push(t);
    }
    //cout << "X\n";
   // cout << p.size() << "\n";
   // cout << q.size() << " " << pq.size() << "\n";
    while(p.size()!=0 && q.size()!=0)
    {
        ll x=p.top();
        ll y=q.top();
        pq.push(x+y);
        p.pop();
        q.pop();
    }
    //cout << "Y\n";
    if(pq.size()<k)
    {
        cout << "-1\n";
        return 0;
    }
    ll cnt=0;
    ll ans=0;
    while(!pq.empty())
    {
        ll x=pq.top();
        ans=ans+x;
        cnt++;
        pq.pop();
        if(cnt==k)
        {
            break;
        }
    }
    cout << ans << "\n";
}


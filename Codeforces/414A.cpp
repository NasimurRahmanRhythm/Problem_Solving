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
bool a[10000015];
int main()
{
    for(ll i=2;i*i<=10000005; )
    {
        if(a[i]==0){
        for(ll j=i;(i*j)<=10000005;j++)
        {
            a[i*j]=1;
        }
        }
        if(i==2)
        {
            i++;
        }
        else
        {
            i+=2;
        }
    }
    vector<ll>v;
    v.pb(2);
    for(ll i=3;i<=10000005;i=i+2)
    {
        if(!a[i])v.pb(i);
    }
    ll n,k;
    map<ll,bool>mp;
    scl2(n,k);
    ll m=n/2;
    if(k==0 && n==1)
    {
        cout << "1\n";
        return 0;
    }
    if(n==1)
    {
        cout << "-1\n";
        return 0;
    }
    if(m>k)
    {
        cout << "-1\n";
        return 0;
    }
    m--;
    ll s=k-m;
    cout << s << " " << 2*s << " ";
    mp[s]=1;
    mp[2*s]=1;
    n=n-2;
    LOOP(i,v.size())
    {
        if(n==0)
        {
            break;
        }
        if(!mp[v[i]])
        {
            cout << v[i] << " ";
            n--;
        }
        //n--;
    }
    cout << "\n";
}


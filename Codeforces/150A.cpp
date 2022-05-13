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
bool prime[3200000];
void seive(ll n)
{
    prime[1]=1;
    for(ll i=3;i*i<=n;i=i+2)
    {
        if(prime[i]==0)
        {
            for(ll j=i;j*i<=n;j++)
            {
                prime[i*j]=1;
            }
        }
    }
}
int main()
{
    ll n;
    scl(n);
//    seive(n);
    ll ans=-1,flag=0,k;
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            //v.pb(i);
            flag=1;
           //cout << n << " " << i << "\n";
            while(n%i==0)
            {
                v.pb(i);
                n=n/i;
                //cout << n << "\n";
            }
           // cout << n << "\n";
        }
    }
   // cout << n << "\n";
    if(n>1)v.pb(n);
    if(flag==0)cout << "1\n0\n";
    else
    {
        if(v.size()<=2)
            cout << "2\n";
        else
            cout << "1\n" << v[0]*v[1] << "\n";
    }
}


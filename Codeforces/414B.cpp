#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll n,k,mod=1000000007;
    scl(n);
    scl(k);
    ll a[n+5];
    FOR(i,n) a[i]=1;
    k=k-1;
    while(k!=0){
    for(ll i=n;i>=1;i--)
    {
        for(ll j=2*i;j<=n;j=j+i)
        {
            a[j]=a[j]+a[i];
            a[j]=a[j]%mod;
        }
    }
    k--;}
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        sum=sum+a[i];
        //cout << a[i] << "\n";
        sum=sum%mod;
    }
    cout << sum << "\n";
}


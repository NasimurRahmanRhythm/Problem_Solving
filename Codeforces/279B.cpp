#include<bits/stdc++.h>
using namespace std;
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ll n,x;
    scl(n);
    scl(x);
    vector<ll>v;
    ll y;
    LOOP(i,n)
    {
        scl(y);
        v.pb(y);
    }
    ll mx=0;
    ll j=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        sum=sum+v[i];
        while(sum>x)
        {
            sum=sum-v[j];
            j++;
        }
        mx=max(mx,i-j+1);
    }
    cout << mx << "\n";
}


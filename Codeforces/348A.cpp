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
    ll n;
    ll a[100005],sum=0,mx=0;
    scl(n);
    FOR(i,n)
    {
        scl(a[i]);
        mx=max(mx,a[i]);
        sum=sum+a[i];
    }
    if(sum%(n-1)!=0)
    {
        cout << max(sum/(n-1)+1,mx) << endl;
    }
    else
    {
        cout << max(sum/(n-1),mx) << endl;
    }
}


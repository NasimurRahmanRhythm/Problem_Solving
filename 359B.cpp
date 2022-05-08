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
    ll n,k;
    scl(n);
    scl(k);
    LOOP(i,k)
    {
        cout << 2*i+1 << " " << 2*i+2 << " ";
    }
    loop(k,n-1)
    {
        cout << 2*i+2 << " " << 2*i+1 << " ";
    }
    cout << "\n";
}


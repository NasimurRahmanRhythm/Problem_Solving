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
    ll a[5];
    ll t;
    scl(t);
    while(t--)
    {
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        ll p=a[1]-a[0]+a[2]-a[1]+a[2]-a[0]-4;
        if(p<=0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << p << endl;
        }
    }
}


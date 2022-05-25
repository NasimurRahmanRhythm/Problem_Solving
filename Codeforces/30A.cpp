#include<bits/stdc++.h>
using namespace std;
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ll a[1005],n;
    scl(n);
    map<ll,ll>mp;
    LOOP(i,n)
    {
        scl(a[i]);
        mp[a[i]]++;
    }
    ll flag=0;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(mp[a[i]+a[j]]>0)
            {
                flag=1;
                cout << a[i]+a[j] << " " << a[i] << " " << a[j] << endl;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout << "-1" << endl;
    }
}


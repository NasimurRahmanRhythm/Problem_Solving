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
    ll n,x,y;
    scl(n);
    map<ll,ll>mp;
    LOOP(i,n)
    {
        scl(x);
        scl(y);
        mp[x]++;
        mp[y]++;
    }
    ll flag=0;
    FOR(i,5)
    {
        if(mp[i]>=3 || mp[i]<=1)
        {
            flag=1;
            cout << "WIN" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "FAIL" << endl;
    }
}


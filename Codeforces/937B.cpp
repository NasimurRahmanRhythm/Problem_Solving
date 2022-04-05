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
//#define mp make_pair
bool mp[1000009];
int main()
{
    vector<ll>prime;
    ll n=1000005;
    //cout << sqrt(1000000010) << endl;
    for(ll i=2;i<=n;i++)
    {
        if(mp[i]==0)
        {
            //mp[i]=1;
            prime.pb(i);
           // cout << i << endl;
            for(ll j=i;j<=n;j=j+i)
            {
                mp[j]=1;
            }
        }
    }
    ll p,y;
    scl(p);
    scl(y);
    ll x=sqrt(y);
    x=min(x,p);
    ll flag=0;
    for(ll i=y;i>p;i--)
    {
        flag=0;
        for(ll j=0;j<=prime.size();j++)
        {
            if(prime[j]>x)
            {
                break;
            }
            if(i%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout << i << endl;
            break;
        }
    }
    if(flag==1 || y==p)
    {
        cout << "-1" << endl;
    }
}


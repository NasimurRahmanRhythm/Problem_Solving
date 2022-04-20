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
ll n;
ll f(ll x,ll y,ll k)
{
    ll a=x,b=y;
    if(y%2==1)
    {
        y=(y/2)+1;
    }
    else
    {
        y=y/2;
    }
    x=x-1;
    if((a+b)%2==0)
    {
        //cout << "X\n";
        return k*x+y;
    }
    else
    {
        //cout << "Z\n";
        return y+((n*n)/2)+k*x;
    }
}
ll g(ll x,ll y,ll k)
{
    ll a=x,b=y;
    if(y%2==1)
    {
        y=(y/2)+1;
    }
    else
    {
        y=y/2;
    }
    x=x-1;
    if((a+b)%2==0)
    {
        //cout << "X\n";
        return k*x+y-((a-1)/2);
    }
    else
    {
        //cout << "Z\n";
        return y+(((n*n)/2)+1)+k*x-(a/2);
    }
}
int main()
{
    ll q,k,flag;
    scl(n);
    scl(q);
    if(n%2==1)
    {
        k=(n/2)+1;
        flag=1;
    }
    else
    {
        k=n/2;
        flag=0;
    }
    ll x,y;
    LOOP(i,q)
    {
        scl(x);
        scl(y);
        if(flag==0)
        {
            cout << f(x,y,k) << "\n";
        }
        else
        {
            cout << g(x,y,k) << "\n";
        }
    }
}


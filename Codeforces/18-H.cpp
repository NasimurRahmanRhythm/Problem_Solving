#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll a,ll b,ll mod)
{
    a=a%mod;
    ll x=0;
    while(b!=0)
    {
        if(b%2==1)
        {
            x=(x+a)%mod;
        }
        a=(a*2)%mod;
        b=b/2;
    }
    return x;
}
int main()
{
    ll a,b,mod;
    cin >> a >> b >> mod;
    a=a%mod;
    if(a==0 || b==0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << bigmod(a,b,mod) << endl;
    }
}

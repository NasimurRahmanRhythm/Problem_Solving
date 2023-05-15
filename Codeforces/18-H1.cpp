#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bigmod(ll a,ll b,ll c)
{
    if(b==0)
        return 0;
    ll x=bigmod(a,b/2,c);
    x=(2*(x%c))%c;
    if(b%2==1)
        x=(a%c+x)%c;
    return x;
}
int main()
{
    ll a,b,mod;
    cin >> a >> b >> mod;
    if(a==0 || b==0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << bigmod(a,b,mod) << endl;
    }
}

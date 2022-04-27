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
    scl(n);
    ll a[n+5];
    FOR(i,n)
    {
        scl(a[i]);
    }
    cout << "X" << endl;
    vector<ll>v,ans;
    ll cnt=0;
    FOR(i,n-1)
    {
        if(a[i]<a[i+1])
        {
            cnt++;
        }
        else
        {
            ans.pb(cnt);
            i=i+2;
            v.pb(i+1);
            cnt=0;
        }
    }
    cout << "Y" << endl;
    LOOP(i,v.size())
    {
        if(a[v[i]-1]<a[v[i]+1] || a[v[i]-2]<a[v[i]])
        {
            ans.pb(ans[i]+ans[i+1]);
        }
    }
    cout << "Z" << endl;
    sort(ans.begin(),ans.end());
    cout << ans[0] << endl;
}


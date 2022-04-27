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
    ll n,a;
    scl(n);
    scl(a);
    string s;
    cin >> s;
    map<char,ll>mp1;
    map<string,ll>mp2;
    char ch;
    LOOP(i,a)
    {
        cin >> ch;
        mp1[ch]=1;
    }
    vector<ll>v;
    ll cnt=0;
    LOOP(i,n)
    {
        if(mp1[s[i]]==1)
        {
            cnt++;
        }
        else
        {
            v.pb(cnt);
            cnt=0;
        }
    }
    v.pb(cnt);
    ll sum=0;
    LOOP(i,v.size())
    {
        //cout << v[i] << endl;
        sum=sum+(v[i]*(v[i]+1))/2;
    }
    cout << sum << endl;
}


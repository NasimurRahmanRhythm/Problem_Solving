#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,x,sum=0;
    cin >> n;
    vector<ll>a,v;
    LOOP(i,n)
    {
        cin >> x;
        a.pb(x);
        sum=sum+x;
    }
    srt(a);
    //cout << a[0] << "\n";
    if(a[n-1]<=sum/2 && sum%2==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}


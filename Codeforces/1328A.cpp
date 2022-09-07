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
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        if(a%b==0)
        {
            cout << "0" << endl;
            continue;
        }
        ll m=a/b;
        ll x=(m+1)*b;
        cout << x-a << endl;
    }
}


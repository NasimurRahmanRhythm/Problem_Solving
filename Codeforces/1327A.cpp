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
    ll n,k;
    ll t;
    scl(t);
    while(t--)
    {
        cin >> n >> k;
        if(n==1 && k==1)
        {
            cout << "YES" << endl;
            continue;
        }
        if(n<=k)
        {
            cout << "NO" << endl;
            continue;
        }
        if((n%2==0 && k%2==0) || (n%2==1 && k%2==1))
        {
            if(n/k>=k)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
}

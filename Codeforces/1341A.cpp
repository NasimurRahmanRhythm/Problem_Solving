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
    scl(t);
    while(t--)
    {
        double n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;
        double x=(c+d)*1.0/(a-b);
        double y=(c-d)*1.0/(a+b);
        //cout << x << " " << y << endl;
        if(y<=n && x>=n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}


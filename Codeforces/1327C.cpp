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
    ll n,m,k;
    scl(n);
    scl(m);
    scl(k);
    ll sx[k+5],sy[k+5],fx[k+5],fy[k+5];
    ll mxx=0;
    ll mxy=0;
    LOOP(i,k)
    {
        scl(sx[i]);
        scl(sy[i]);
        mxx=max(mxx,sx[i]);
        mxy=max(mxy,sy[i]);
    }
    LOOP(i,k)
    {
        scl(fx[i]);
        scl(fy[i]);
    }
    ll ans=mxx+mxy-2;
   // cout << ans << endl;
    ans=ans+n*m-1;
    cout << ans << endl;
    LOOP(i,mxx-1)
    {
        cout << "U";
    }
    LOOP(i,mxy-1)
    {
        cout << "L";
    }
    LOOP(i,n-1)
    {
        cout << "D";
    }
    for(ll i=0;i<m-1;i++)
    {
        cout << "R";
        for(ll j=0;j<n-1;j++)
        {
            if(i%2)
            {
                cout << "D";
            }
            else
            {
                cout<< "U";
            }
        }
    }
    cout << "\n";
}

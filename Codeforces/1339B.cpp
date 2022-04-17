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
        ll n;
        scl(n);
        ll a[n+5];
        FOR(i,n)
        {
            scl(a[i]);
        }
        sort(a+1,a+n+1);
       /* FOR(i,n)
        {
            cout << a[i] << " ";
        }
        cout << "\n";*/
        ll k,m,p;
        if(n%2==1)
        {
            k=n/2+1;
            cout << a[k] << " ";
            m=k-1;
            p=k+1;
            for(ll i=m,j=p;i>=1,j<=n;i--,j++)
            {
                cout << a[i] << " " << a[j] << " ";
            }
            cout << "\n";
        }
        else
        {
            k=n/2;
            m=k;
            p=k+1;
            //cout << "X";
            for(ll i=m,j=p;i>=1,j<=n;i--,j++)
            {
                cout << a[i] << " " << a[j] << " ";
            }
            cout << "\n";
        }

    }
}


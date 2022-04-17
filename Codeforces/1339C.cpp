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
    ll p[100];
    p[1]=1;
    for(ll i=2;i<=62;i++)
    {
        p[i]=p[i-1]*2;
    }
    /*for(ll i=1;i<=62;i++)
    {
        cout << p[i] << "\n";
    }*/
    ll cum[100];
    cum[1]=1;
    for(ll i=2;i<=62;i++)
    {
        cum[i]=cum[i-1]+p[i];
        //cout << cum[i] << endl;
    }
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        ll a[n+5];
        ll mx=-1e11,x=-1e11;
        FOR(i,n)
        {
            scl(a[i]);
        }
        ll b[n+5];
        FOR(i,n)
        {
            mx=max(mx,a[i]);
            b[i]=mx-a[i];
            x=max(x,b[i]);
          //  cout << b[i] << " ";
        }
       // cout << "\n";
        //sort(b+1,b+n+1);
       /* FOR(i,n)
        {
            cout << b[i] << " ";
        }
        cout << "\n";*/
        if(x==0)
        {
            cout << "0\n";
            continue;
        }
        //cout << "X " << cum[3] << endl;
        FOR(i,62)
        {
            //cout << x << " " << cum[i] << "\n";
            if(x<=cum[i])
            {
                cout << i << "\n";
                break;
            }
        }
    }
}


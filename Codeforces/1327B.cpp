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
bool mp1[100005],mp2[100005];
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll n;
        scl(n);
        ll cnt=1;
        memset(mp1,0,sizeof(mp1));
      //  memset(mp2,0,sizeof(mp2));
       // map<ll,bool>mp;
       vector<pair<ll,ll>>v;
       vector<ll>a,b;
        LOOP(i,n)
        {
            ll m,flag;
            scl(m);
            ll mn=n+5,mn1=n+5;
            LOOP(j,m)
            {
                ll k;
                flag=0;
                scl(k);
                if(mp1[k]==0)
                {
                    flag=1;
                    mn=min(mn,k);
                    mp1[mn]=1;
                }
               // mn1=min(mn,k);
                //mp2[mn1]=1;
            }
            if(flag==0)
            {
                a.pb(i+1);
            }
            cnt++;
        }
        if(a.size()==0)
        {
            cout << "OPTIMAL" << endl;
            continue;
        }
        FOR(i,n)
        {
            if(mp1[i]==0)
            {
                b.pb(i);
            }
        }
        cout << "IMPROVE" << endl;
        LOOP(i,a.size())
        {
            cout << a[i] << " " << b[i] << endl;
        }
    }
}

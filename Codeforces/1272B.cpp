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
        string s;
        cin >> s;
        ll l=0,r=0,u=0,d=0;
        LOOP(i,s.size())
        {
            if(s[i]=='L')
            {
                l++;
            }
            if(s[i]=='R')
            {
                r++;
            }
            if(s[i]=='U')
            {
                u++;
            }
            if(s[i]=='D')
            {
                d++;
            }
        }
        ll lr=min(l,r);
        ll ud=min(u,d);
        if(ud==0 && lr==0)
        {
            cout << "0" << endl;
            continue;
        }
        //RRRRRRRRRRRRRRR
        if(ud==0)
        {
            lr=1;
        }
        if(lr==0)
        {
            ud=1;
        }
        cout << 2*lr+2*ud << endl;
        LOOP(i,lr)
        {
            cout << "L";
        }
        LOOP(i,ud)
        {
            cout << "U";
        }
        LOOP(i,lr)
        {
            cout << "R";
        }
        LOOP(i,ud)
        {
            cout << "D";
        }
        cout << "\n";
    }
}


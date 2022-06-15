#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define f first
#define s second
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll a,b;
        scl(a);
        scl(b);
        if(a==b)
        {
            cout << "0\n";
        }
        else if(a>b)
        {
            if((a-b)%2==1)
            {
                cout << "2\n";
            }
            else
            {
                cout << "1\n";
            }
        }
        else
        {
            if((b-a)%2==0)
            {
                cout << "2\n";
            }
            else
            {
                cout << "1\n";
            }
        }
    }
}


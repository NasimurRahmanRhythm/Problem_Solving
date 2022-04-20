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
    ll n,m;
    ll cnt1,cnt2,cnt3,cnt4;
    cin >> n >> m;
    char ch;
    ll flag=0;
    FOR(i,n)
    {
        FOR(j,m)
        {
            cin >> ch;
            if(ch=='B')
            {
                if(flag==0)
                {
                    cnt1=j;
                    cnt4=i;
                    flag=1;
                }
                if(flag==1 && i==cnt4)
                {
                    cnt2=j;
                }
                if(flag==1 && j==cnt1)
                {
                    cnt3=i;
                }
            }
        }
    }
    cout << (cnt3+cnt4)/2 << " " << (cnt1+cnt2)/2 << "\n";
}


#include<bits/stdc++.h>
using namespace std;
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define ll long long
int main()
{
    ll n,cnt=0;
    cin >> n;
    for(ll i=n-1;i>=1;i--)
    {
        cnt++;
        if(n%i==0)
        {
            break;
        }
    }
    //Rhythm
    cout << cnt << endl;
}


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
    ll n;
    scl(n);
    string s;
    while(n--)
    {
        cin >> s;
        ll sum=0,flag1=0,flag2=0;
        LOOP(i,s.size())
        {
            ll x=s[i]-'0';
            sum=sum+x;
            if(x%2==0)
            {
                flag1++;
            }
            if(x==0 && flag2==0)
            {
                flag2++;
            }
        }
        if(sum%3==0 && flag1>1 && flag2==1)
        {
            cout << "red" << endl;
        }
        else
        {
            cout << "cyan" << endl;
        }
    }
}


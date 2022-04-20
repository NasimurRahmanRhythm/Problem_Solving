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
    int t,n;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        int flag=0;
        int cnt=0;
        LOOP(i,n)
        {
            if(abs(s[i]-s[n-i-1])==2 || abs(s[i]-s[n-i-1])==0)
            {
                //cout << s[i] << " " << s[n-i-1] << " " << abs(s[i]-s[n-i-1]) << endl;
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}


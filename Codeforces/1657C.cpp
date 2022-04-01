#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define loop(a,b)            for(ll i=a;i<=b;i++)
#define sci(n)               scanf("%d",&n)
#define scl(n)               scanf("%lld",&n)
#define scl3(a,b,c)          scanf("%lld%lld%lld",&a,&b,&c);
#define scl2(a,b)            scanf("%lld%lld",&a,&b)
#define scd(n)               scanf("%lf",&n)
#define pf(n)                printf("%lld\n",n)
#define srt(g)               sort(g.begin(),g.end())
#define rvs(g)               reverse(g.begin(),g.end())
#define pl                   pair<long long,long long>
#define pll                  pair<long long,pair<long long,long long>>
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
        ll n;
        string s;
        cin >> n >> s;
        ll ans1=0,ans2,i=0,k=0,flag=0,tmp;
        for(i=0;i<n;)
        {
            //cout << "i " << i << "\n";
            if(s[i]=='(' && flag==0 && i+1!=n)
            {
                ans1++;
                i=i+2;
                k=k+2;
            }
            else
            {
                if(s[i]==')' && flag==1)
                {
                    ans1++;
                    k=k+(i-tmp)+1;
                    flag=0;
                }
                else if(flag==1)
                {
                   // k++;
                }
                else if(flag==0)
                {
                    flag=1;
                    tmp=i;
                }
                i++;
            }
        }
        cout << ans1 << " " << n-k << "\n";
    }
}


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
    ll a[n+5],sum=0;
    FOR(i,n)
    {
        scl(a[i]);
        sum=sum+a[i];
    }
    if(n==2)
    {
        cout << "1 1" << endl;
        return 0;
    }
    if(n==1)
    {
        cout << "1 0" << endl;
        return 0;
    }
    ll ans=a[1]+a[n],b[n+5],c[n+5];
    b[1]=a[1];
    c[n]=a[n];
    for(ll i=1,j=n;;)
    {
        //cout << b[i] << " " << c[j] << endl;
        if(b[i]<=c[j])
        {
            b[i+1]=b[i]+a[i+1];
            //cout << "X" << endl;
            ans=ans+a[i+1];
            i++;
        }
        else
        {
            c[j-1]=c[j]+a[j-1];
            //cout << "Y" << endl;
            ans=ans+a[j-1];
            j--;
        }
        if(ans==sum)
        {
            cout << i << " " << n-j+1 << endl;
            break;
        }
    }
}


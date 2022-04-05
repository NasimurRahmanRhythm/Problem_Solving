#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k,ans=0;
    cin >> n >> k;
    if(k==1 || k==n)
    {
        cout << n*3 << endl;
        return 0;
    }
    //int a[n+1]={1};
    if(n%2==0)
    {
        if(k<=n/2)
        {
            ans=ans+k*3;
            //cout << ans << endl;
            ans=ans+k;
            //cout << ans << endl;
            ans=ans+(n-k-1)*3;
            //cout << ans << endl;
            ans=ans+2;
        }
        else
        {
            ans=ans+(n-k)*3;
            //cout << ans << endl;
            ans=ans+(n-k+1);
            //cout << ans << endl;
            ans=ans+(k-1)*3;
            //cout << ans << endl;
            ans=ans+2;
        }
    }
    if(n%2==1)
    {
        if(k<=(n/2)+1)
        {
            ans=ans+k*3;
            //cout << ans << endl;
            ans=ans+k;
            //cout << ans << endl;
            ans=ans+(n-k-1)*3;
            //cout << ans << endl;
            ans=ans+2;
        }
        else
        {
            ans=ans+(n-k)*3;
            //cout << ans << endl;
            ans=ans+(n-k+1);
            //cout << ans << endl;
            ans=ans+(k-1)*3;
            //cout << ans << endl;
            ans=ans+2;
        }
    }
    cout << ans << endl;
}

#include<bits/stdc++.h>
using namespace std;
int b[1000005]={0};
int main()
{
    int n,a[1005],i,j,cnt=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int k=a[i]+a[j];
            //cout << k << endl;
            b[k]++;
            //cout << b[k] << endl;
            cnt++;
        }
    }
    sort(b,b+1000005);
    cout << b[1000004] << endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,a[105],b[105],c[105],i,j,flag=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<n;i++)
    {
        int p=a[i]+b[i];
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                continue;
            }
            if(p==a[j])
            {
                if(a[j]+b[j]==a[i])
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

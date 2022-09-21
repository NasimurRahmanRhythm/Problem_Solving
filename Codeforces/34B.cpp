#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[105],i,n,m,sum=0;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
        sum=sum-a[i];
        else
            break;
    }
    if(sum>0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}

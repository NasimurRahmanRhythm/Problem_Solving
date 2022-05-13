#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
vector< ll >v;
ll num;
void lucky(ll num)
{
    if(num>4444444444)
    {
        return;
    }
    if(num>0)
    {
        v.pb(num);
    }
    lucky(num*10+4);
    lucky(num*10+7);
}
int main()
{
    lucky(0);
    ll l,r,sum=0,i,m,flag=0;
    cin >> l >> r;
    m=l;
    sort(v.begin(),v.end());
    //cout << v[0] << endl;
    //cout << v[1] << endl;
    //cout << v[v.size()-1] << endl;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<m)
        {
            continue;
        }
        if(v[i]>=r)
        {
            sum=sum+(r-m+1)*v[i];
            break;
        }
        sum=sum+(v[i]-m+1)*v[i];
        m=v[i]+1;
    }
    cout << sum << endl;
}


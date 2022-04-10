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
    ll r,c;
    scl(r);
    scl(c);
    if(r==1 && c==1)
    {
        cout << "0" << endl;
        return 0;
    }
    ll flag=0;
    if(r==1)
    {
        for(ll i=0; i<c; i++)
        {
            cout << i+2 << " ";
        }
        cout << "\n";
        flag=1;
    }
    if(c==1)
    {
        for(ll i=0; i<r; i++)
        {
            cout << i+2 << endl;
        }
        flag=1;
    }
    if(flag==1)
    {
        return 0;
    }
    ll mat[r+5][c+5];
    mat[0][0]=2;
    mat[0][1]=3;
    for(ll i=2; i<c; i++)
    {
        mat[0][i]=mat[0][i-1]+2;
    }
    for(ll i=1; i<c; i++)
    {
        mat[i][0]=mat[i-1][0]+2;
        for(ll j=1; j<r; j++)
        {
            mat[i][j]=mat[i][0]*mat[0][j];
        }
    }

    for(ll i=0; i<c; i++)
    {
        for(ll j=0; j<r; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}


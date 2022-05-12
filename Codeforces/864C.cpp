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
    ll a,b,f,k,ck;
    cin >> a >> b >> f >> k;
    ll cnt=0,h=b;

    for(ll i=1;i<=k;i++)
    {
        if(i%2)
        {
           // cout << "X" << endl;
            if(h<f)
            {
                cout << "-1" << endl;
                return 0;
            }
            if(h<a)
            {
                //cout << 2*a-f << " Z\n";
                cnt++;
                h=b-(a-f);
                if(h<0)
                {
                    cout << "-1" << endl;
                    return 0;
                }
            }
            else if(i+1<=k)
            {
                ck=a;
                ck+=(a-f);
                if(h<ck)
                {
                    cnt++;
                    h=b-(a-f);
                }

                else
                    h=h-a;
            }
        }
        else
        {
           // cout << "Z" << endl;
            if(h<a-f)
            {
                cout << "-1" << endl;
                return 0;
            }

            if(h<a)
            {
                cnt++;
                h=b-f;
                if(h<0)
                {

                    printf("-1\n");
                    return 0;
                }
            }


            else if(i+1<=k)
            {
                ck=f+a;
                if(h<ck)
                {
                    cnt++;
                    h=b-f;
                }
                else
                    h-=a;
            }

        }
    }
    cout << cnt << endl;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt1=0,cnt2=0,flag1=0,flag2=0;
    char s[55];
    cin >> s;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='4')
        {
            cnt1++;
            flag1=1;
        }
        if(s[i]=='7')
        {
            cnt2++;
            flag2=1;
        }
    }
    if(flag1==0 && flag2==0)
    {
        cout << "-1" << endl;
    }
    else
    {
        if(cnt1>=cnt2)
        {
            cout << "4" << endl;
        }
        else
        {
            cout << "7" << endl;
        }
    }
}

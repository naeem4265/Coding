#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,d;
    string s;
    cin >> n;
    ll l=1, r = n;
    while(l<=r)
    {
        if(l==r)
        {
            cout <<"! ";
            cout <<l<<endl;
            cout.flush();
            return ;
        }
        if(r-1==l)
        {
            cout <<"? "<<l<<" "<<l<<endl;
            cin >> d;
            cout <<"! ";
            if(d==l)
            {
                cout <<l<<endl;
            }
            else
                cout <<l+1<<endl;
            cout.flush();
            return ;
        }
        m = (l+r+1)/2;
        k = m-l+1;
        if(k&1)
        {
            m--;
            k--;
        }    //cout <<l<<" "<<r<<" "<<m<<endl;
        cout <<"? "<<l<<" "<<m<<endl;
        ll ct = 0;
        for(j=0; j<k; j++)
        {
            cin >> d;
            if(d>=l && d<=m) ct++;
        }
        if(ct&1)
        {
            r = m;
        }
        else
        {
            l = m+1;
        }
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

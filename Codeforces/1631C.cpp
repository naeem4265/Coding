#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> k;
    if(n==4 && k==3)
    {
        cout <<-1<<endl;
        return ;
    }
    if(k<n-1)
    {
        cout <<k<<" "<<n-1<<endl;
        for(i=1,j=n-2; i<j; i++,j--)
        {
            if(i==k)
            {
                cout <<"0 "<<j<<endl;
            }
            else if(j==k)
            {
                cout <<"0 "<<i<<endl;
            }
            else
            {
                cout <<i<<" "<<j<<endl;
            }
        }
        return ;
    }
    cout <<"1 3"<<endl;
    cout <<n-2<<" "<<n-1<<endl;
    for(i=2,j=n-3; i<j; i++,j-- )
    {
        if(i==3)
        {
            cout <<"0 "<<j<<endl;
        }
        else
        {
            cout <<i<<" "<<j<<endl;
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

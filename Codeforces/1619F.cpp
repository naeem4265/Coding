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
    cin >> n >> m >> k;
    ll x,y;
    x = n%m;
    y = n/m;
    ll st=1;
    while(k--)
    {
        ll p = x;
        j = st;
        while(p--)
        {
            cout <<y+1<<" ";
            for(i=0; i<y+1; i++)
            {
                cout <<j<<" ";
                j++;
                if(j>n)
                    j = 1;
            }
            cout <<endl;
        }
        st = j;
        p = m-x;
        j = st;
        while(p--)
        {
            cout <<y<<" ";
            for(i=0; i<y; i++)
            {
                cout <<j<<" ";
                j++;
                if(j>n)
                    j = 1;
            }
            cout <<endl;
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

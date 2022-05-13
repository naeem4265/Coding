#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
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
    cin >> n >> m;
    cout <<"Case #"<<tt<<":\n";
    for(i=0; i<=2*n; i++)
    {
        for(j=0; j<=2*m; j++)
        {
            if((i==0 && (j<=1)) || (i==1 && j<=1))
                cout <<'.';
            else if(i&1)
            {
                if(j&1)
                    cout <<'.';
                else
                    cout <<'|';
            }
            else
            {
                if(j&1)
                    cout <<'-';
                else
                    cout <<'+';
            }
        }
        cout <<endl;
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

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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n;
    bool d[n+5][6];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
            cin >> d[i][j];
    }
    m = n/2;
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            ll op=0,be=0,ne=0;
            for(k=0; k<n; k++)
            {
                if(d[k][i] && d[k][j])
                    op++;
                else if(d[k][i])
                    be++;
                else if(d[k][j])
                    ne++;
            }
                        //cout <<i<<" "<<j<<" ij "<<op<<" "<<be<<" "<<ne<<endl;
            if(max(ne,be)<=m && (op+min(be,ne))>=m && (op+be+ne)==n)
            {
                cout <<"YES\n";
                return ;
            }
        }
    }
    cout <<"NO\n";
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

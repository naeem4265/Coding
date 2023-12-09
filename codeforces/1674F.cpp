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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m >> q;
    string s[n+5];
    for(i=0; i<n; i++)  cin >> s[i];
    ll total=0, in=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='*')
                total++;
        }
    }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if((j*n+i)<total && s[i][j]=='*')
                in++;
        }
    }
    while(q--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if(s[x][y]=='*')
        {
            if((y*n+x)<total)
                in--;
            total--;
            s[x][y] = '.';
            y = (total)/n;
            x = (total)%n;
            if(s[x][y]=='*')
                in--;
            cout <<total-in<<endl;
        }
        else
        {
            if((y*n+x)<total)
                in++;
            total++;
            s[x][y] = '*';
            y = (total-1)/n;
            x = (total-1)%n;
            if(s[x][y]=='*')
                in++;
            cout <<total-in<<endl;
        }  //cout <<in<<" "<<total<<endl;
        //for(k=0; k<n; k++)  cout <<s[k]<<endl;
    }

    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1008
using namespace std;
ll n,m;
char ch[limit][limit];

void solve(ll r,ll c,char d)
{         //cout <<r<<" "<<c<<" "<<d<<endl;
    ll i,j;
    ch[r][c]='#';
    if(d=='R')
    {
        for(i=c+2; i<=m ; i++)
        {
            ch[r][i-2]='#';
            if(ch[r][i]=='#')
            {
                if(r+2<=n && ch[r+1][i-2]==' ' && ch[r+2][i-2]==' ' && i-2-c>=2)
                    solve(r,i-2,'D');
                return;
            }
        }
        ch[r][m-1] = '#';
        ch[r][m] = '#';
        if(r+2<=n && ch[r+1][m]==' ' && ch[r+2][m]==' ' && m-c>=2)
            solve(r,m,'D');
        return;
    }
    if(d=='D')
    {
        for(i=r+2; i<=n ; i++)
        {
            ch[i-2][c]='#';
            if(ch[i][c]=='#')
            {
                if(c-2>0 && ch[i-2][c-1]==' ' && ch[i-2][c-2]==' ' && i-2-r>=2)
                    solve(i-2,c,'L');
                return;
            }
        }
        ch[n-1][c] = '#';
        ch[n][c] = '#';
        if(c-2>0 && ch[n][c-1]==' ' && ch[n][c-2]==' ' && n-r>1)
            solve(n,c,'L');
        return;
    }
    if(d=='L')
    {
        for(i=c-2; i>0 ; i--)
        {
            ch[r][i+2]='#';
            if(ch[r][i]=='#')
            {
                if(r-2>0 && ch[r-1][i+2]==' ' && ch[r-2][i+2]==' ' && c-i-2>1)
                    solve(r,i+2,'U');
                return ;
            }
        }
        ch[r][1] = '#';
        ch[r][2] = '#';
        if(r-2>0 && ch[r-1][1]==' ' && ch[r-2][1]==' ' && c-1>1)
            solve(r,1,'U');
        return ;
    }
    if(d=='U')
    {
        for(i=r-2; i>0 ; i--)
        {
            ch[i+2][c]='#';
            if(ch[i][c]=='#')
            {
                if(c+2<=m && ch[i+2][c+1]==' ' && ch[i+2][c+2]==' ' && r-i-2>1)
                solve(i+2,c,'R');
                return;
            }
        }
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll i,j;
    cin >> n >> m;
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=m; j++)
            ch[i][j]=' ';
    }
    solve(1,1,'R');
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cout <<ch[i][j];
        cout <<endl;
    }
    return 0;
}


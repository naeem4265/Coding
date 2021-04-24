#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll vis[n+5][n+5];
    char ch[n+5][n+5];
    memset(vis,0,sizeof(vis));
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> ch[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(ch[i][j]=='*') ct++;
        }
        if(ct==2)
        {
            if(i)
            {
                for(j=0; j<n; j++)
                {
                    if(ch[i][j]=='*') ch[0][j] = '*';
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                        cout <<ch[i][j];
                    cout <<endl;
                }
            }
            else
            {
                for(j=0; j<n; j++)
                {
                    if(ch[i][j]=='*') ch[n-1][j] = '*';
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                        cout <<ch[i][j];
                    cout <<endl;
                }
            }
            return;
        }
    }
    for(i=0; i<n; i++)
    {
        ll ct=0;
        for(j=0; j<n; j++)
        {
            if(ch[j][i]=='*') ct++;
        }
        if(ct==2)
        {
            if(i)
            {
                for(j=0; j<n; j++)
                {
                    if(ch[j][i]=='*') ch[j][0] = '*';
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                        cout <<ch[i][j];
                    cout <<endl;
                }
            }
            else
            {
                for(j=0; j<n; j++)
                {
                    if(ch[j][i]=='*') ch[j][n-1] = '*';
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                        cout <<ch[i][j];
                    cout <<endl;
                }
            }
            return;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ch[i][j]=='*')
            {
                for(k=0; k<n; k++)
                    vis[i][k]++;
                for(k=0; k<n; k++)
                    vis[k][j]++;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(vis[i][j]==2)
                ch[i][j]='*';
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout <<ch[i][j];
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

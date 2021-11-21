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
    cin >> s;
    ll ct=0;
    for(i=0; i<n; i++)
        if(s[i]=='2') ct++;

    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    if(ct==0)
    {
        cout <<"YES\n";
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    cout <<"X";
                }
                else
                    cout <<"=";
            }
            cout << endl;
        }
        return ;
    }
    char ch[n+6][n+5];
    for(i=0; i<n+5; i++)
    {
        for(j=0; j<n+5; j++)
        {
            ch[i][j]='*';
        }
    }
    if(ct>2 || ct<1)
    {
        cout <<"YES\n";
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    ch[i][j] = 'X';
                    ch[j][i] = 'X';
                    //cout <<"X";
                }
                else if(s[i]=='1' || s[j]=='1')
                {
                    ch[i][j] = '=';
                    ch[j][i] = '=';
                    //cout <<"=";
                }
                else if(ch[i][j]=='*')
                {
                    if(vis[i])
                    {
                        ch[i][j] = '-';
                        ch[j][i] = '+';
                        vis[j] = 1;
                    }
                    else{
                        ch[i][j] = '+';
                        ch[j][i] = '-';
                        vis[i] = 1;
                    }
                }
            }
            //cout << endl;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cout << ch[i][j];
            }
            cout << endl;
        }
        return ;
    }
    else
    {
        cout <<"NO\n";
        return ;
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

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
int n,m;
string s[12];
vector<char> out;
bool vis[15];

bool dfs(int pos)
{
    if(pos==m) return 1;
    int i,j;
    for(i=1; i<n; i++)
    {
        if(s[0][pos]!=s[i][pos])
            break;
    }
    if(i==n)
    {
        out.pb(s[0][pos]);   //cout <<out.size()<<" "<<pos<<" ok\n";
        return dfs(pos+1);;
    }
    for(int i=0,j=0; i<n; i++)
    {    //cout <<i<<"  dd "<<pos<<endl;
        for(j=0; j<i; j++)
        {
            if(s[i][pos]==s[j][pos])
                break;
        }
        if(i>j) continue;

        int ok=1;
        for(j=0; j<n; j++)
        {
            //cout <<i<<" "<<j<<" "<<pos<<" "<<vis[j]<<endl;
            if(s[i][pos]!=s[j][pos] && vis[j]==1)
            {
                ok = 0;
                for(int k=0; k<j; k++)
                {
                    if(s[i][pos]!=s[k][pos])
                        vis[k] = 0;
                }
                break;
            }
            if(s[i][pos]!=s[j][pos])
                vis[j] = 1;
        }
        if(ok)
        {
            out.pb(s[i][pos]);
            bool x = dfs(pos+1);  //cout <<i<<" ret "<<x<<" "<<out.size()<<endl;
            if(x)
            {
                //cout <<i<<" "<<pos<<" "<<out.size()<<" cok\n";
                return x;
            }
            for(j=0; j<n; j++)
            {
                if(s[i][pos]!=s[j][pos])
                    vis[j] = 0;
            }
            while(out.size()>pos)
                out.pop_back();
        }
    }
    return 0;
}

void solve(int t)
{
    int i,j;
    cin >> n >> m;
    out.clear();
    for(i=0; i<11; i++)
    {
        vis[i]=0;
    }
    for(i=0; i<n; i++)
        cin >> s[i];
    if(dfs(0))
    {
        for(i=0; i<m; i++)
            cout <<out[i];
        cout <<endl;
    }
    else
        cout <<-1<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}



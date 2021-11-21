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
bool in[limit],out[limit];
void solve(int t)
{
    int i,j,n,m,k,ans=0;
    cin >> n >>m;
    for(i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        if(in[v]==0 || out[u]!=0)
        {
            in[v] = 1;
            out[u] = 1;
        }
        else
        {
            in[u] = 1;
            out[v] = 1;
        }
    }
    int I=0,O=0;
    for(i=1; i<=n; i++)
    {              cout <<i<<" "<<I<<" "<<O<<" "<<ans<<endl;
        if(!in[i])
        {
            if(O)
                O--;
            else
            {
                ans++;      cout <<i<<" up "<<ans<<endl;
                I++;
            }
        }
        if(!out[i])
        {
            if(I)
                I--;
            else
            {
                ans++;             cout <<i<<" dn "<<ans<<endl;
                O++;
            }
        }
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


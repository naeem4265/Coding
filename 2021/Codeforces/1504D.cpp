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
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> m;
            if(m==1)
            for(; k<=n; k++)
            {
                bool ok = 0;
                for(; l<=n; l++)
                {
                    if((k+l)%2==0 && vis[k][l]==0)
                    {
                        cout <<"2 "<<k<<" "<<l<<endl;
                        vis[k][l] = 1;
                        ok=1;
                    }
                }
                if(ok) continue;

            }
            else if(m==3)
            for(; k<=n; k++)
            {
                for(; l<=n; l++)
                {
                    if((k+l)&1)
                        cout <<1<<" "<<k<<" "<<l<<endl;
                    else
                        cout <<2<<" "<<k<<" "<<l<<endl;
                }
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
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

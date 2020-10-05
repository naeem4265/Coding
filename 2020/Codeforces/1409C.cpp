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

void solve(int t)
{
    int i,j,n,m,x,y;
    cin >> n >> x >> y;
    m = y-x;
    int ck=1;
    vector<int>out;
    for(i=1; i<=m; i++)
    {
        if(m%i==0 && (1+m/i)<=n)
        {
            out.pb(y);
            int z = y;
            for(j=2; j<=n; j++)
            {
                z = out[out.size()-1];
                if((z-i)<1)
                {
                    z = y;
                    ck = 0;
                }
                if(ck)
                    z -= i;
                else
                    z += i;
                out.pb(z);
            }
        }
    }
    for(i=0; i<n; i++)
        cout <<out[i]<<" ";
    cout <<endl;
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


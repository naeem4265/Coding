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
    int i,j,n,m,k;
    cin >> n >> m;
    int D[2*n+5][2];
    for(i=0; i<2*n; i++)
    {
        cin >> D[i][0] >> D[i][1];
    }
    bool ok=0;
    for(i=0; i<2*n; i+=2)
    {
        if(D[i][1]==D[i+1][0])
            ok=1;
    }
    if(m&1 || ((ok==0)))
    {
        cout <<"NO\n";
        return ;
    }
    else
        cout <<"YES\n";
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


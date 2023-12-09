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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    //cin >> n;
    ll b[9];
    for(i=0; i<7; i++)
        cin >> b[i];
    sort(b,b+7);
    cout <<b[0]<<" "<<b[1]<<" ";
    if(b[2]<(b[0]+b[1]))
    {
        cout <<b[2]<<endl;
        return ;
    }
    else
        cout <<b[3]<<endl;
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

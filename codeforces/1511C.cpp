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
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    ll pos[55];
    for(i=0; i<55; i++) pos[i] = Mod;

    for(i=1; i<=n; i++)
    {
        cin >> m;
        pos[m] = min(pos[m],i);
    }

    while(q--)
    {
        cin >> m;
        cout <<pos[m]<<" ";
        for(i=1; i<=53; i++)
        {
            if(pos[i]<pos[m])
            {
                pos[i]++;
            }
        }
        pos[m] = 1;
    }
    cout <<endl;
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

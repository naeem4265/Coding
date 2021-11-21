#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 108
using namespace std;
ll D[limit],ans[limit];

void rec(ll l,ll h,ll ct)
{
    if(l>h) return ;
    ll ind = -1,mx = -1;
    for(ll i=l; i<=h; i++)
    {
        if(D[i]>mx)
        {
            ind = i;
            mx = D[i];
        }
    }
    ans[ind] = ct;
    rec(l,ind-1,ct+1);
    rec(ind+1,h,ct+1);
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    for(i=1; i<=n; i++) cin >> D[i];
    rec(1,n,0);
    for(i=1; i<=n; i++)
        cout <<ans[i] <<" ";
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

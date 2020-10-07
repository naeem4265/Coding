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
ll D[22],n,sum;
ll rec(ll pos,ll taken)
{
    if(pos==n) return abs(sum-2*taken);
    ll x,y;
    x = rec(pos+1,taken+D[pos]);
    y = rec(pos+1,taken);
    //cout <<pos<<" "<<x<<" "<<y<<endl;
    return min(x,y);
}
void solve(int t)
{
    ll i,j,m,k;
    cin >> n ;
    for(i=0; i<n; i++)
    {
        cin >> D[i];
        sum += D[i];
    }
    cout <<rec(0,0) <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

//Accepted

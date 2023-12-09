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
    ll i,j,n,a;
    string s;
    cin >> n;
    ll ct=0;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a==5) ct++;
    }
    if(ct==n)
    {
        cout <<-1<<endl;
        return ;
    }
    for(i=9; i<=ct; i+= 9)
    {
        for(j=0; j<9; j++)
            cout <<5;
    }
    if(ct>8)
        for(i=0; i<(n-ct); i++)
            cout <<0;
    else
        cout <<0;
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

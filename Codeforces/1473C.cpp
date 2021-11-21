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

void solve(ll tc)
{
    ll i,j,n,m,k,p;
    cin >> n >> k;
    m = n-k;
    p = 2*k-n;  // cout <<n << " "<<k<<' '<<m<<" "<<p<<endl;
    if(p==1)
    {
        for(i=k; i>0; i--)
            cout <<i<<" ";
        cout <<endl;
        return ;
    }
    for(i=1; i<p; i++) cout <<i<<" ";
    for(j=k; j>=i; j--)  cout <<j<<" ";
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}


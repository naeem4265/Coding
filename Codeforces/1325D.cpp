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
    cin >> n >> m;
    if(n>m ||(m-n)&1)
    {
        cout <<-1<<endl;
        return;
    }
    if((n+m)==0)
    {
        cout <<0<<endl;
        return ;
    }
    if(n==m)
    {
    	    cout <<1<<endl<<n<<endl;
        return ;
    }
    k = (m-n)/2;
    if( (k&n)==0LL)
    {
        cout <<2<<endl;
        cout <<n+k<<" "<<k<<endl;
        return ;
    }
    cout <<3<<endl;
    cout<<n<<" "<<k<<" "<<k<<endl;
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
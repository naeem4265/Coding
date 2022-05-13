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

    cin >> n >> m;
    ll a[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    a[n+1] = -1e18;
    ll ans = 0,st=-1,en=-1;
    ll sum = m;
    for(i=1,j=1; i<=n+1; i++)
    {
        sum += a[i];
        if(ans<(i-j))
        {
            st = j;
            en = i-1;
            ans = i-j;
        }
        while(sum<0)
        {
            sum -= a[j];
            j++;
        }
    }
    if(st==-1)
    {
        cout <<-1<<endl;
        return ;
    }
    cout << st<<" "<<en <<endl;

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


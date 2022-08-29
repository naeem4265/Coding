#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;
ll pre1[limit],pre0[limit];
ll BS(ll n)
{
    ll l=1,h=n,m,ans=1e9;
    while(l<=h)
    {
        m = (l+h)/2;
        ll one = pre1[m-1];
        ll zero = pre0[n]-pre0[m-1];
        if(one>=zero)
        {
            h = m-1;
        }
        else
        {
            l = m+1;
        }
        ans = min(ans, max(one, zero));
    }
    return ans;
}

void solve(ll tt)
{
    ll i=0,j,n,m,k=0,q;
    string s;
    cin >> s;

    n = s.size();
    pre1[0] = 0;
    pre0[0] = 0;

    for(i=1; i<=n; i++)
    {
        pre0[i] = pre0[i-1];
        if(s[i-1]=='0')
            pre0[i]++;
        pre1[i] = pre1[i-1];
        if(s[i-1]=='1')
            pre1[i]++;
    }
    ll l=0,h=n, ans = min(pre1[n], pre0[n]);
    ll right=0;
    for(i=n; i>0; i--)
    {
        ans = min(BS(i)+right,ans);     //cout <<i<<" "<<ans<<endl;
        if(s[i-1]=='1')
            right++;
    }

    cout << ans <<endl;
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

#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,s;

    cin >> n >> s;
    ll d[n+5],sum=0;
    d[0] = d[n+1] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        sum += d[i];
    }
    if(sum<s)
    {
        cout <<-1<<endl;
        return ;
    }
    sum = 0;
    ll ans = Mod;
    for(j=1,i=1; i<=n; i++)
    {
        sum += d[i];
        while(sum>s)
        {
            sum -= d[j];
            j++;
        }
        ans = min(ans, j-1+n-i);  //cout <<sum<<" "<<i<<" "<<j<<" "<<ans<<endl;
    }
    cout << ans <<endl;
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

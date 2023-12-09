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

void solve(ll tt)
{
    ll i,j,n,m,k,q;

    cin >> n >> k;
    ll d[n+5];
    ll sum = 0, sum2=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        sum += d[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            sum2 += d[i]*d[j];
        }
    }

    cout <<"Case #"<<tt<<": ";   //cout <<sum<<" "<<sum2<<endl;
    if(sum2==0)
    {
        cout <<0<<endl;
        return ;
    }
    if(sum==0 || -sum2%sum)
    {
        cout <<"IMPOSSIBLE\n";
        return;
    }
    cout <<-sum2/sum<<endl;
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

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
    ll i,j,n,m,k;
    string s;
    cin >> n;
    ll sum=0,d[n+5],e[n+5],ans=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        sum += d[i];
    }
    for(i=0; i<n; i++)
    {
        cin >> e[i];
        sum -= e[i];
        if( (d[i]-e[i])>0 )ans+= d[i]-e[i];
    }
    if(sum)
    {
        cout <<-1<<endl;
        return ;
    }
    cout <<ans<<endl;
    j  = 0;
    while(j<n && d[j]>=e[j])
            j++;
    for(i=0; i<n; i++)
    {
        while(d[i]>e[i])
        {
            cout <<i+1<<" "<<j+1<<endl;
            d[i]--;
            d[j]++;
            if(d[j]==e[j])
            {
                while(j<n && d[j]>=e[j])
                    j++;
            }
        }
    }
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

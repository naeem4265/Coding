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
    string s;
    cin >> n;
    ll d[n+5],a[n+4];
    for(i=0; i<n; i++)
        cin >> d[i];
    if(n<=1)
    {
        cout <<"YES\n";
        return ;
    }
	k = 1;
        a[0] = d[0]+1;
        for(i=1; i<n; i++)
        {
            if((d[i]-a[i-1]-k)>1 || (d[i]-a[i-1]-k)<-1)
                break;
            a[i] = a[i-1]+k;
        }
        if(i==n)
        {
            cout <<"YES\n";
            return ;
        }


        a[0] = d[0];
        for(i=1; i<n; i++)
        {
            a[i] = a[i-1]+k;
            if((d[i]-a[i-1]-k)>1 || (d[i]-a[i-1]-k)<-1)
                break;
        }
        if(i==n)
        {
            cout <<"YES\n";
            return ;
        }

        a[0] = d[0]-1;
        for(i=1; i<n; i++)
        {
            if((d[i]-a[i-1]-k)>1 || (d[i]-a[i-1]-k)<-1)
                break;
            a[i] = a[i-1]+k;
        }
        if(i==n)
        {
            cout <<"YES\n";
            return ;
        }

    cout <<"NO\n";
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
        solve(t);
    return 0;
}

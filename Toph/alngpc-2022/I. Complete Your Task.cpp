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
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll Pr[n+5], Pi[n+5];
    for(i=0; i<n; i++)
    {
        cin >> Pr[i] >> Pi[i];
    }
    ll idx = -1,ct=0;
    for(i=n-1,j=0; j<(10*n+5); j++, i>=0 )
    {
        if(Pr[i]<=Pi[i])
        {
            ct++;
            i = (i-1+n)%n;
            continue;
        }
        if(idx==-1) idx = i;

        ll x = min(Pr[i]-Pi[i], Pi[(i-1+n)%n]);
        Pi[i] += x;
        Pi[(i-1+n)%n] -= x;

        //cout <<i<<" "<<idx<<" "<<Pr[i]<<" "<<Pi[i]<<endl;
        if(Pr[i]>Pi[i])
        {
            cout <<"NO\n";
            return ;
        }
        else
        {
            Pr[i] = 0;
            Pi[i] = 0;
        }
        i = (i-1+n)%n;
    }
    cout <<"YES\n";
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

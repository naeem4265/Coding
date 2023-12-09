#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q,r;
    cin >> m >> r >> n;
    ll d[n+5];
    d[n] = Mod*Mod;
    d[n+1] = Mod*Mod;
    for(i=0; i<n; i++)   cin >> d[i];

    cout <<"Case #"<<tt<<": ";
    ll l=0,t, ans = 0;
    for(i=0; i<n; i++)
    {
        if((d[i]-r)>l)
        {
            cout <<"IMPOSSIBLE\n";
            return;
        }
        if((d[i+1]-r)>l)
        {
            ans++;   //  cout <<i<<" "<<d[i]<<" "<<l<<" "<<ans<<endl;
            l = d[i]+r;
        }
        if(l>=m)
        {
            cout <<ans<<endl;
            return;
        }
    }
    cout <<"IMPOSSIBLE\n";
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}



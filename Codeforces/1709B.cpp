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
    cin >> n >> q;
    ll d[n+5],csuml[n+5],csumr[n+5];
    csuml[1] = csumr[n] = 0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    for(i=2; i<=n; i++)
    {
        csuml[i] = csuml[i-1]+max(0LL, d[i-1]-d[i]);  //cout <<i<<" "<<d[i]<<" "<<d[i-1]<<" "<<csuml[i]<<endl;
    }
    for(i=n-1; i>0; i--)
    {
        csumr[i] = csumr[i+1]+max(0LL, d[i+1]-d[i]);
    }
    while(q--)
    {
        ll l,r;
        cin >> l>> r;
        if(l<r)
        {
            cout << csuml[r] - csuml[l] <<endl;
        }
        else
        {
            cout << csumr[r] - csumr[l] <<endl;
        }
    }


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

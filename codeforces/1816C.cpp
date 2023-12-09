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
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    for(i=0; i<n; i++)  cin >> d[i];
    if(n&1){
        cout <<"YES\n";
        return;
    }
    if(d[0]<=d[1] || d[n-2]<=d[n-1]){
       cout <<"YES\n";
       return;
    }

    ll mnl[n+5],mnr[n+5],b[n+5];
    mnl[0] = 0;
    mnr[n-1] = 0;
    for(i=0; i<n; i++)   b[i] = d[i];
    for(i=1; i<n; i++)
    {
        mnl[i] = min(mnl[i-1], b[i]-b[i-1]);
        if(b[i]<b[i-1]){
            ll x = b[i-1]-b[i];
            b[i] = b[i-1];
            b[i+1] += x;
        }
    }
    for(i=0; i<n; i++)   b[i] = d[i];
    for(i=n-2; i>0; i--)
    {
        mnr[i] = min(mnr[i+1], b[i+1]-b[i]);
        if(b[i+1]<b[i]){
            ll x = b[i+1]-b[i];
            b[i] = b[i+1];
            b[i-1] += x;
        }
    }
    for(i=2; i<n-2; i+=2)
    {
            //cout <<i<<" "<<mnl[i-1]<<" "<<mnr[i+2]<<endl;
        if((-mnl[i-1]-mnr[i+2])<=(d[i+1]-d[i]))
        {
            cout <<"YES\n";
            return;
        }
    }
    cout <<"NO\n";
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


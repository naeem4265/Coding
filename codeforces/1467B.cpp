#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll D[n+5];
    for(i=1; i<=n; i++) cin >> D[i];
    ll ct=0;
    for(i=2; i<n; i++)
    {
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1]))
        {
            ct++;
        }
    }
    D[0] = D[1];
    D[n+1] = D[n];
    ll mx = ct;
    for(i=2; i<n; i++)
    {
        ll temp = D[i],c=0;
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1])) c++;
        if((D[i+1]>D[i] && D[i+1]>D[i+2])||(D[i+1]<D[i] && D[i+1]<D[i+2])) c++;
        if((D[i-1]>D[i-2] && D[i-1]>D[i])||(D[i-1]<D[i-2] && D[i-1]<D[i])) c++;
        D[i] = -Mod;
        ll d=0;
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1])) d++;
        if((D[i+1]>D[i] && D[i+1]>D[i+2])||(D[i+1]<D[i] && D[i+1]<D[i+2])) d++;
        if((D[i-1]>D[i-2] && D[i-1]>D[i])||(D[i-1]<D[i-2] && D[i-1]<D[i])) d++;
        mx = min(mx,ct-(c-d));

        D[i] = Mod;
        d=0;
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1])) d++;
        if((D[i+1]>D[i] && D[i+1]>D[i+2])||(D[i+1]<D[i] && D[i+1]<D[i+2])) d++;
        if((D[i-1]>D[i-2] && D[i-1]>D[i])||(D[i-1]<D[i-2] && D[i-1]<D[i])) d++;
        mx = min(mx,ct-(c-d));

        D[i] = D[i-1];
        d=0;
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1])) d++;
        if((D[i+1]>D[i] && D[i+1]>D[i+2])||(D[i+1]<D[i] && D[i+1]<D[i+2])) d++;
        if((D[i-1]>D[i-2] && D[i-1]>D[i])||(D[i-1]<D[i-2] && D[i-1]<D[i])) d++;
        mx = min(mx,ct-(c-d));

        D[i] = D[i+1];
        d=0;
        if((D[i]>D[i-1] && D[i]>D[i+1])||(D[i]<D[i-1] && D[i]<D[i+1])) d++;
        if((D[i+1]>D[i] && D[i+1]>D[i+2])||(D[i+1]<D[i] && D[i+1]<D[i+2])) d++;
        if((D[i-1]>D[i-2] && D[i-1]>D[i])||(D[i-1]<D[i-2] && D[i-1]<D[i])) d++;
        mx = min(mx,ct-(c-d));

        D[i] = temp;
    }
    cout <<mx<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}


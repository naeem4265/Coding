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

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n ;
    ll mx=0,D[n+5],L[n+5],R[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> D[i];
    }
    ll ct=0;
    L[1] = 0;
    for(i=2; i<=n; i++)
    {
        if(D[i-1]<D[i])
            L[i] = L[i-1]+1;
        else
            L[i] = 0;
        if(mx<L[i])
        {
            ct = 0;
            mx = L[i];
        }
        if(mx==L[i]) ct++;
    }
    R[n] = 0;
    for(i=n-1; i>0; i--)
    {
        if(D[i+1]<D[i])
            R[i] = R[i+1]+1;
        else
            R[i] = 0;
        if(mx<R[i])
        {
            ct = 0;
            mx = R[i];
        }
        if(mx==R[i]) ct++;
    }

    ll ans = 0;
    for(i=1; i<=n; i++)
    {    //cout <<i<<" "<<L[i]<<" "<<R[i]<<" "<<mx<<endl;
        if(L[i]==R[i] && L[i]==mx && mx%2==0 && ct<=2)
        {
            ans++;
        }
    }
    cout << ans <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

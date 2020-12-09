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
    cin >> n ;
    ll D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> D[i];
    }
    ll tt = 0,mx=0,ans=0,ind=0;
    for(i=n-1; i>0; i--)
    {
        tt = D[i-1]-D[i];          //cout <<i<<" "<<tt<<endl;
        if(mx<abs(tt))
        {
            mx = abs(tt);
            ind = i-1;
        }
    }
    if(ind==0)
    {
        tt = D[0]-D[1];
        ans = -abs(tt);
    }
    tt = 0;
    for(i=n-1; i>0; i--)
    {
        if(i==ind)
        {
            ans -= tt;
            tt = D[i-1]-D[i+1];
            ans += abs(tt);   cout <<ans<<" here "<<i<<endl;
            continue;
        }
        tt = D[i-1]-D[i];       cout <<i<<" up1 "<<tt<<endl;
        ans += abs(tt);
    }
    mx = ans;
    ans = 0;
    ll temp = D[0];
    D[0] = D[1];
    tt = 0;
    ans = 0;
    for(i=n-1; i>0; i--)
    {
        tt = D[i-1]-D[i];          //cout <<i<<" dwn "<<tt<<endl;
        ans += abs(tt);
    }
    mx = min(mx,ans);
    D[0] = D[1] = temp;
    tt = 0;
    ans = 0;
    for(i=n-1; i>0; i--)
    {
        tt = D[i-1]-D[i];          //cout <<i<<" dwn2 "<<tt<<endl;
        ans += abs(tt);
    }
    cout <<min(mx,ans)<<endl;         cout <<mx<<" "<<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


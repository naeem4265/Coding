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
    ll i,j,n,m,my,follower,w1,w2,ans=0;
    cin >> my >> follower;
    cin >> n >> m;
    cin >> w1 >> w2;
    if(w1>w2)
    {
        swap(w1,w2);
        swap(n,m);
    }
    for(i=0; i<=n; i++)
    {
        ll a,b,c,d,e,ct;
        a = min(i,min(my/w1,n));
        ct = a;
        b = my-a*w1;
        c = n-a;
        d = min(b/w2,m);
        e = m-d;
        ct += d;
        a = min(follower/w1,c);
        ct += a;
        b = follower-a*w1;
        ct += min(b/w2,e);
        ans = max(ans,ct);
    }
    cout <<ans<<endl;
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


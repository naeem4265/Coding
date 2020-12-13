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
    ll i,j,n,m,k,mx=0;
    cin >> n ;
    m = n;
    for(i=2; i<=1000; i++)
    {
        ll ct=1;
        while(n%i==0)
        {
            ct = ct*i;
            n/=i;
        }
        mx = max(ct,mx);
    }
    mx = max(n,mx);
    ll ok=0;
    if(mx>1000) ok=1;
    for(i=1; i<=mx; i++)
    {
        if(m%i)
        {
            ok=1;
            break;
        }
    }
    if(ok)
    {
        cout <<-1<<endl;
        return ;
    }
    cout <<mx<<endl;
    for(i=1; i<=mx; i++)
    {
        cout <<i<<" ";
    }
    cout <<endl;
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


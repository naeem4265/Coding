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
ll ask(ll t,ll i,ll j,ll x)
{
    cout <<"? "<<t<<" "<<i<<" "<<j<<" "<<x<<endl;
    cin >> x;
    return x;
}
void solve(ll t)
{
    ll i,j,n,m,k,x;
    string s;
    cin >> n ;
    ll p[n+5];
    ll idx = n;
    for(i=1; i<n; i+=2)
    {
        x = ask(2,i,i+1,1);
        if(x==1)
        {
            idx = i;
            break;
        }
        if(x==2)
        {
            x = ask(2,i+1,i,1);
            if(x==1)
            {
                idx = i+1;
                break;
            }
        }
    }

    p[idx] = 1;
    for(i=1; i<=n; i++)
    {
        if(i==idx) continue;
        x = ask(1,idx, i, n-1);
        p[i] = x;
    }
    cout <<"! ";
    for(i=1; i<=n; i++)
        cout <<p[i]<<" ";
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

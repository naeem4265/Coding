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
    ll i,j,n,m,k,d;
    cin >> n >> k;
    ll D[n+5];
    D[0] = Mod;
    for(i=1; i<=n; i++) cin >> D[i];
    while(1)
    {
        for(i=2; i<=n; i++)
        {
            if(D[i-1]<D[i])
            {
                d = min(D[i]-D[i-1],D[i-2]-D[i-1]+1);
                k -= d;
                D[i-1] += d;
                if(k<=0)
                {
                    cout <<i-1<<endl;
                    return ;
                }
                break;
            }
        }
        if(i>n)
        {
            cout <<-1<<endl;
            return;
        }
    }
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


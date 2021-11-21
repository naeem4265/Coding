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
    ll i,j,n,m,q,a,d;
    cin >> q >> d;
    for(i=0; i<q; i++)
    {
        cin >> a;
        if(a>1000)
        {
            cout <<"YES\n";
            continue;
        }
        bool ok=0;
        while(a>0)
        {
            ll b=a;
            while(b)
            {
                ll dig = b%10;
                if(dig==d)
                    ok = 1;
                b /= 10;
            }
            a -= d;
        }
        if(ok)
            cout <<"YES\n";
        else
            cout <<"NO\n";
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


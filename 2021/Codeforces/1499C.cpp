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
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];
    ll ans = n*d[0]+n*d[1],mn,mnl=d[0],mnu=d[1];
    mn = d[0]+d[1];
    ll l=n-1,u=n-1;
    for(i=2; i<n; i++)
    {    //cout <<l<<" leftright "<<u<<" "<<ans<<endl;
        if(i&1)
        {
            mnu = min(mnu,d[i]);
            ans = min(ans,mn+u*mnu+l*mnl);
            u--;
        }
        else
        {
            mnl = min(mnl,d[i]);
            ans = min(ans,mn+u*mnu+l*mnl);
            l--;
        }
        mn += d[i];   //cout <<i<<" "<<mn<<" "<<ans<<endl;
    }

    mnl=d[1],mnu=d[0];
    mn = d[0]+d[1];
    l=n-1,u=n-1;
    for(i=2; i<n; i++)
    {    //cout <<l<<" leftright "<<u<<" "<<ans<<endl;
        if(i%2==0)
        {
            mnu = min(mnu,d[i]);
            ans = min(ans,mn+u*mnu+l*mnl);
            u--;
        }
        else
        {
            mnl = min(mnl,d[i]);
            ans = min(ans,mn+u*mnu+l*mnl);
            l--;
        }
        mn += d[i];   //cout <<i<<" "<<mn<<" "<<ans<<endl;
    }

    cout << ans <<endl;
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

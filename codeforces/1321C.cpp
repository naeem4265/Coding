#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    ll ans = 0;
    for(i='z'; i>'a'; i--)
    {
        while(1)
        {
            bool ok=1;
            for(j=0; j<n; j++)
            {
                if(s[j]==i)
                {
                    if(j && s[j-1]==i-1)
                    {
                        s = s.substr(0,j)+s.substr(j+1, n-j-1);
                        ok = 0;
                        ans++;
                        n--;
                        break;
                    }
                    if(j<n-1 && s[j+1]==i-1)
                    {
                        s = s.substr(0,j)+s.substr(j+1, n-j-1);
                        ok = 0;
                        ans++;
                        n--;
                        break;
                    }
                }
            }
            if(ok)   break;     //cout << ans <<" "<<j<<" "<<s<<endl;
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
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

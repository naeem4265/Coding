#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve()
{
    ll a,k,i,n,ans=1,x,y;
    cin >> n >> k;
    vector <ll> m,p;
    for(i=0; i<n; i++)
    {
        cin >> a;
        if(a<0)
            m.pb(a);
        else
            p.pb(a);
    }
    sort(p.begin(),p.end());
    sort(m.begin(),m.end());
    reverse(m.begin(),m.end());
    x = p.size(); y=m.size();
    if(!x && k&1)
    {
        for(i=0; i<k; i++) ans = (ans*m[i])%Mod;
        if(ans<0) ans +=Mod;
        cout <<ans<<endl;
        return ;
    }
    for(i=k; i>0; i--)
    {
        if(i==1)
        {
            if(x)
                ans = (ans*p[--x])%Mod;
            else
                ans = (ans*m[--y])%Mod;
            continue;
        }
        else
        {
            if(x>1 && y>1)
            {
                if((p[x-1]*p[x-2]) <= (m[y-1]*m[y-2]))
                {
                    ans = (ans*m[y-1])%Mod;
                    ans = (ans*m[y-2])%Mod;
                    y -= 2;
                    i--;
                    continue;
                }
                else
                {
                    ans = (ans*p[x-1])%Mod;
                    ans = (ans*p[x-2])%Mod;
                    x -= 2;
                    i--;
                    continue;
                }
            }
            if(y>1)
            {
                ans = (ans*m[y-1])%Mod;
                ans = (ans*m[y-2])%Mod;
                y -= 2;
                i--;
                continue;
            }
            if(x>1)
            {
                ans = (ans*p[x-1])%Mod;
                ans = (ans*p[x-2])%Mod;
                x -= 2;
                i--;
                continue;
            }
        }
        if(x)
            ans = (ans*p[--x])%Mod;
        else if(y)
            ans = (ans*m[--y])%Mod;
    }
    if(ans<0) ans +=Mod;
    cout << ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
 //   TC
        solve();
  return 0;
}

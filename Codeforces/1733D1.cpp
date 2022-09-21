#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,x,y;
    string a,b;
    cin >> n >> x >> y;
    cin >> a >> b;
    ll t=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i]) t++;
    }
    if(t&1)
    {
        cout <<-1<<endl;
        return ;
    }
    t = t/2;
    for(i=0; i<n; i++)
    {
        if(!t) break;
        if(a[i]!=b[i])  t--;
    }
    ll ans = 0;
    for(j=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            while(a[j]==b[j]) j++;
            if(j+1==i)
                ans += min(x, 2LL*y);
            else
                ans += y;
                //cout <<i<<" "<<j<<" "<<ans<<endl;
        }
    }
    cout << ans <<endl;


    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

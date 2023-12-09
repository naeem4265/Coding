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
    ll d[n+5];
    bool vis[n+5];
    bool vis2[n+5];
    memset(vis,0,sizeof(vis));
    memset(vis2,0,sizeof(vis2));

    for(i=0; i<n; i++)
        cin >> d[i];
    sort(d,d+n);

    ll ans = 0;
    vector<ll>v ;
    v.pb(0);

    for(i=0,j=0; i<n; i++)
    {
        if(d[i]<=n && vis[d[i]]==0)
        {
            vis[d[i]] = 1;
            vis2[i] = 1;
            v.pb(d[i]);
        }
    }
    sort(v.begin(),v.end());

    for(i=n-1,j=v.size()-1,k=n; ; )
    {    //cout <<i<<" up "<<j<<" "<<k<<" "<<d[i]<<endl;
        if(k==0)
        {
            cout << ans <<endl;
            return ;
        }
        if(i<0)
        {
            cout <<-1<<endl;
            return ;
        }
        if(j&&v[j]==k)
        {
            k--;
            j--;
        }
        else if(vis2[i])
        {
            i--;
        }
        else
        {
            m = -1+(d[i]+1)/2;
            if(m<k)
            {
                cout <<-1 <<endl;
                return ;
            }
            else
            {
                k--;
                i--;
                ans++;
            }
        } //cout <<i<<" "<<j<<" "<<k<<" "<<d[i]<<endl;
    }
    //cout <<ans <<endl;
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

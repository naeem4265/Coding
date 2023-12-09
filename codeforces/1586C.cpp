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
vector<ll> v;
bool vis[limit];
string s[limit];

void solve(ll t)
{
    ll i,j,n,m,k;

    cin >> n >> m;
    for(i=0; i<n; i++)
        cin >> s[i];

    memset(vis,0,sizeof(vis));

    for(i=1; i<n; i++)
    {
        for(j=1; j<m; j++)
        {
            //if(s[i][j]=='X') continue;
            if( s[i-1][j]=='X' && s[i][j-1]=='X' && vis[j]==0 )
            {
                vis[j] = 1;
                v.pb(j);
            }
        }
    }
    v.pb(-1);
    v.pb(Mod);
    sort(v.begin(),v.end());
                                //for(i=0; i<v.size(); i++) cout <<v[i]<<" dd ";cout <<endl;
    ll q;
    cin >> q;
    while(q--)
    {
        ll x,y;
        cin >> x >> y;
        y--;
        ll indx1=Mod,indx2=0;
        ll l=0,h=v.size()-1,mid;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(v[mid]>=x)
            {
                indx1 = v[mid];
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        l=0,h=v.size()-1;
        while(l<=h)
        {
            mid = (l+h)/2;
            if(v[mid]<=y)
            {
                indx2 = v[mid];
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }      //cout <<indx1<<" here "<<indx2<<endl;

        if(indx1<=indx2)
        {
            cout <<"NO\n";
        }
        else
        {
            cout <<"YES\n";
        }
    }


    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

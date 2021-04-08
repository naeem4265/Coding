#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;

struct st
{
    ll a,ind;
};
bool operator <(st x,st y)
{
    return x.a<y.a;
}

void solve(int t)
{
    int i,j,n,m,k;
    cin >> n ;
    st D[n+5];
    D[0].a = -1;
    D[0].ind = 0;
    D[n+1].a = Mod;
    D[n+1].ind = n+1;
    ll in,mx = 0;

    for(i=1; i<=n; i++)
    {
        cin >> m;
        if(m>=mx)
        {
            in = i;
            mx = m;
        }
        D[i].a = m;
        D[i].ind = i;
    }
    sort(D,D+n+2);
    ll cum[limit];
    cum[0] = 0;
    for(i=1; i<=n; i++)
    {
        cum[i] = D[i].a+cum[i-1];
    }
    vector<ll>ans;
    ans.pb(D[n].ind);
    for(i=n-1; i>0; i--)
    {
        if(cum[i]>=D[i+1].a)
            ans.pb(D[i].ind);
        else
            break;
    }
    sort(ans.begin(),ans.end());
    m = ans.size();
    cout <<m<<endl;
    for(i=0; i<m; i++)
    {
        cout <<ans[i]<<" ";
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

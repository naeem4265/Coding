#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    cin >> s;
    char c = '1';
    vector<char> v;
    bool vis[n+5];
    memset(vis, 0, sizeof(vis));

    for(i=n-1; i>=0; i-- ) {
        if( s[i] >= c ) {
            c = s[i];
            v.pb(c);
            vis[i] = 1;
        }
    }
    sort( v.begin(), v.end() );
    for(i=0,j=0; i<n; i++ ) {
        if( vis[i] ) {
            s[i] = v[j++];
        }
    }
   //for(i=0; i<v.size(); i++ )  cout <<v[i]<<" ";  cout <<endl;
    for(i=1; i<n; i++ ) {
        if( s[i-1] > s[i] ) {
            cout <<-1<<endl;
            return;
        }
    }
    m = v.size();
    i = m-2;
    ll ans = m-1;
    while( i>=0 && v[i] == v[m-1] )   {
        ans--; i--;
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

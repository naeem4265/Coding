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
    int i,j,n,m,k;
    cin >> n ;
    string s[n+3];
    for(i=0; i<n; i++)
        cin >> s[i];

    vector<pair<int,int> > out;

        if(s[0][1]=='0')
        {
            out.pb(mp(1,2));
        }
        if(s[1][0]=='0')
        {
            out.pb(mp(2,1));
        }
        if(s[n-1][n-2]=='1')
        {
            out.pb(mp(n,n-1));
        }
        if(s[n-2][n-1]=='1')
        {
            out.pb(mp(n-1,n));
        }
    if(out.size()<=2)
    {
        cout <<out.size()<<endl;
        for(i=0; i<out.size(); i++)
            cout <<out[i].first<<" "<<out[i].second<<endl;
        return ;
    }
    out.clear();
        if(s[0][1]=='1')
        {
            out.pb(mp(1,2));
        }
        if(s[1][0]=='1')
        {
            out.pb(mp(2,1));
        }
        if(s[n-1][n-2]=='0')
        {
            out.pb(mp(n,n-1));
        }
        if(s[n-2][n-1]=='0')
        {
            out.pb(mp(n-1,n));
        }
    if(out.size()<=2)
    {
        cout <<out.size()<<endl;
        for(i=0; i<out.size(); i++)
            cout <<out[i].first<<" "<<out[i].second<<endl;
        return ;
    }
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


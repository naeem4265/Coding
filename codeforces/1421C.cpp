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
    int i,j,n,m,k,x,y,z;
    string s;
    cin >> s ;
    vector<pair<char,int> >out;
    n = s.size();
    out.pb(mp('L',n-1));
    x = n-2;
    n += x;
    out.pb(mp('R',x+1));
    y = n-x-1;
    n += y;
    out.pb(mp('R',n-x));
    cout <<out.size()<<endl;
    for(i=0; i<out.size(); i++)
        cout <<out[i].first<<" "<<out[i].second<<endl;

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


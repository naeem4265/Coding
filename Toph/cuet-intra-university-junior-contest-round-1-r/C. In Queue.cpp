#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;

struct str
{
    ll c,s;
};

bool operator<(str a,str b)
{
    if(a.c!=b.c)
        return a.c>b.c;
    return a.s<b.s;
}

void solve(int t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> k;
    str st[n+5];
    for(i=0; i<n; i++)
    {
        cin >> m ;
        if(m>=k) m = k;
        st[i].c = m;
        st[i].s = i;
    }
    st[n].c = -10;
    st[n].s = n+1;

    sort(st,st+n+1);
    for(i=0; i<n; i++)
    {
        cout <<st[i].s+1<<" ";
    }
    cout << endl;
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

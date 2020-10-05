#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define TC int tt; cin >> tt; for(int t=0; t<tt; t++)
#define ll long long
#define pb push_back
#define Mod 1000000007
#define limit 108
using namespace std;
map <string,int> mymap;
vector <string > g[limit],out;
int level[limit];

void Sort(string s)
{
    int i,u,sz;
    u = mymap[s];
    sz = g[u].size();
    sort(g[u].begin(),g[u].end());
    for(i=0; i<sz; i++)
    {
        s = g[u][i];
        out.pb(s);
        Sort(s);
    }
}

void solve(int t)
{
    int i,j,n,k=1,u,v;
    for(i=0; i<limit; i++)
    {
        level[i]=0;
        g[i].clear();
    }
    mymap.clear();
    out.clear();
    cin >> n;
    getchar();
    string s;
    for(i=1; i<=n; i++)
    {
        getline(cin,s);
        if(mymap[s]==0)
            mymap[s]=k++;
        v = mymap[s];
        j = 0;
        while(s[j]==' ') j++;
        u = level[j];
        level[j+1] = v;
        g[u].pb(s);   //cout <<s<<" "<<k-1<<" "<<j<<" "<<u<<" "<<v<<" "<<g[u].size()<<endl;
    }
    s = "start";
    mymap[s]=0;
    Sort(s);
    cout <<"Case "<<t<<":\n";
    for(i=0; i<n; i++)
        cout<<out[i]<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int tt,t;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



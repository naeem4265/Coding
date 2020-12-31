#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;

bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }

    //for(int i=2; i<limit; i++) if(vis[i]==0) cout <<i<<endl;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    bool vis2[15];
    memset(vis2,0,sizeof(vis2));

    for(i=1; i<=10; i++)
    {
        char ch;
        cin >> ch;
        if(ch=='*')
        {
            vis2[i%10]=1;
        }
    }

    set<ll>st;
    for(i=1001; i<=9999; i+=2)
    {
        m = i;
        st.clear();
        while(m)
        {
            st.insert(m%10);
            m/=10;
        }          //cout <<i<<" "<<st.size()<<" "<<vis[i]<<endl;
        if(vis[i] || st.size()<4) continue;
        m = i;
        while(m)
        {
            if(vis2[m%10]==0) break;
            m/=10;
        }      // cout <<i<<" "<<m<<endl;
        if(m==0)
        {
            cout <<i<<endl;
            return ;
        }
    }
    cout <<":-(\n";
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    ll tc,tt=1;
   // cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}


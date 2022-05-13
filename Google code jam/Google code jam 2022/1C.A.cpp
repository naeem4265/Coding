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

void solve(ll tt)
{
    ll i,j,l,n,m,k,q,mot;
    cin >> n;
    mot = n;
    string s,t[n+5],ss;
    bool vis[200];
    ll linkf[105];
    ll linkb[105];
    ll suru[30],ses[30];
    memset(suru, 0, sizeof(suru));
    memset(ses, 0, sizeof(ses));
    memset(linkf, -1, sizeof(linkf));
    memset(linkb, -1, sizeof(linkb));
    memset(vis, 0, sizeof(vis));

    vector<string> rem, akoi;

    for(i=0; i<n; i++)  cin >> t[i];
    cout <<"Case #"<<tt<<": ";
    for(i=0; i<n; i++)
    {
        ss = t[i];
        s = t[i];
        sort(ss.begin(), ss.end());
        if(ss[0]==ss[ss.size()-1])
        {
            akoi.pb(ss);
        }
        else
        {
            bool vis2[30];
            memset(vis2, 0, sizeof(vis2));
            vis2[s[0]-'A'] = 1;
            for(ll j=1; j<s.size(); j++)
            {
                if(vis2[s[j]-'A'] && s[j]!=s[j-1])
                {
                    cout <<"IMPOSSIBLE\n";
                    return ;
                }
                vis2[s[j]-'A'] = 1;
            }
            for(j=1; j<s.size()-1; j++)
            {
                if(vis[s[j]-'A'])
                {
                    cout <<"IMPOSSIBLE\n";
                    return ;
                }
            }
            for(j=1; j<s.size()-1; j++)
            {
                vis[s[j]-'A']=1;
            }
            rem.pb(s);
            suru[s[0]-'A']++;
            ses[s[s.size()-1]-'A']++;
        }
    }
    for(i=0; i<27; i++)
    {
        if(suru[i]>1 || ses[i]>1)
        {
            cout <<"IMPOSSIBLE\n";
            return ;
        }
    }
    n = rem.size();
    for(i=0; i<n; i++)
    {
        k = rem[i].size();
        memset(vis, 0, sizeof(vis));

        for(j=0; j<n; j++)
        {
            if(i==j) continue;
            s = rem[j];
            if(rem[i][k-1]==rem[j][0])
            {
                linkf[i] = j;
                linkb[j] = i;
            }
        }
    }
    memset(vis, 0, sizeof(vis));
    bool vis2[105];
    memset(vis2, 0, sizeof(vis2));
    string ans="";
    ll ct = 0;
    while(1)
    {
        bool ok=1;
        for(i=0; i<n; i++)
        {
            if(vis[i])  continue;   //cout <<i<<" "<<linkb[i]<<endl;
            if(linkb[i]==-1)
            {
                for(j=0; j<akoi.size(); j++)
                {
                    if(vis2[j]==0 && rem[i][0]==akoi[j][akoi[j].size()-1])
                    {
                        ans += akoi[j];
                        ct++;
                        vis2[j] = 1;
                    }
                }
                ans+=rem[i];
                ct++;
                ok = 0;
                for(j=0; j<akoi.size(); j++)
                {
                    if(rem[i][k-1]==akoi[j][0]){
                        ans += akoi[j];
                        ct++;
                        vis2[j] = 1;
                    }

                }
                vis[i] = 1;
                linkb[linkf[i]] = -1;
            }
        }
        if(ok)  break;
    }
    for(i=0; i<akoi.size(); i++)
    {
        if(vis2[i]==0){
            ans+=akoi[i];
            ct++;
        }

    }
    if(ct==mot)
        cout <<ans<<endl;
    else
        cout <<"IMPOSSIBLE\n";

    return ;
}
int  main()
{
 //   Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

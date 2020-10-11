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
    int i,j,n,m,k,x,y,a,b,inda,indb;
    cin >> n ;
    vector<int>v[n+2];
    for(i=0; i<n; i++)
        v[i].pb(i);
    while(1)
    {
        string s,s2;
        cin >> s;
        if(s=="quit")
            break;
        cin >> a >> s2 >> b;
        for(i=0; i<n; i++)
        {
            for(j=v[i].size()-1; j>=0; j--)
            {
                if(v[i][j]==a)
                    inda=i;
                if(v[i][j]==b)
                    indb=i;
            }
        }
        if(inda==indb) continue;

        if(s2=="onto")
        {
            for(j=v[indb].size()-1; j>=0; j--)
            {
                x = v[indb][j];
                if(x==b)
                    break;
                v[x].clear();
                v[x].pb(x);
                v[indb].pop_back();
            }
        }


        if(s=="move")
        {
            for(j=v[inda].size()-1; j>=0; j--)
            {
                x = v[inda][j];
                if(x==a)
                    break;
                v[x].clear();
                v[x].pb(x);
                v[inda].pop_back();
            }
            v[indb].pb(v[inda][j]);
            v[inda].pop_back();
        }
        else
        {
            for(j=v[inda].size()-1; j>=0; j--)
            {
                x = v[inda][j];
                if(x==a)
                    break;
            }
            for(; j<v[inda].size(); j++)
            {
                x = v[inda][j];
                v[indb].pb(x);
            }
             for(j=v[inda].size()-1; j>=0; j--)
            {
                x = v[inda][j];
                v[inda].pop_back();
                if(x==a)
                    break;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout <<i<<":";
        if(v[i].size()==0)
        {
            cout <<endl;
            continue;
        }
        cout <<" ";
        for(j=0; j<v[i].size(); j++)
        {
            cout <<v[i][j];
            if(j!=v[i].size()-1) cout <<" ";
        }
        cout <<endl;
    }
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
//Accepted

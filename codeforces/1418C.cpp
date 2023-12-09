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
    int i=1,j,n,m;
    cin >> n;
    bool vis[n+10];
    for(i=n; i<n+10; i++) vis[i]=0;
    for(i=0; i<n ;i++)
        cin >> vis[i];
    int ct=0; i = 1;
    if(vis[0]==1)
    {
        ct++;
        if(vis[1]==0 && vis[2]==1)
            i=2;
    }
    else
    {
        if(vis[1]==0 && vis[2]==1)
            i=2;
    }
    for(; i<n; i++)
    {
        i++;
        if(vis[i]!=0)
            i++;          //cout <<i<<" up "<<ct<<endl;
        if(i>=n) break;
        if(vis[i]!=0)
        {
            ct++;
            if(vis[i+1]==0 && vis[i+2]==1)
                i++;
        }
        else if(vis[i]==0)
        {
            if(vis[i+1]==0 && vis[i+2]!=0)
                i++;
        }          //cout <<i<<" dn "<<ct<<endl;
    }
    cout <<ct<<endl;
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


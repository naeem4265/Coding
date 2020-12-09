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
    vector<pair<int,int> > D;
    D.pb(mp(Mod,Mod));
    for(i=1; i<=n; i++)
    {
        cin >> m;
        D.pb(mp(m,i));
    }
    sort(D.begin(),D.end());
    int mn=Mod;
    for(i=0; i<n; i++)
    {     //cout <<i<<" "<<ct<<" "<<mn<<endl;
        vector<int> ind;
        ind.clear();
        int ct=0;
        for(j=i; j<=n; j++)
        {
            if(D[i].first!=D[j].first)
            {
                for(k=0; k<ind.size(); k++)
                {
                    if(k==0)
                    {
                        if(ind[0]>1) ct++;
                    }
                    else if(ind[k-1]+1!=ind[k]) ct++;
                }
                if(ind[k-1]<n) ct++;
                mn = min(mn,ct);
                i = j-1;
                break;
            }
            ind.pb(D[j].second);
        }  //cout <<i<<" "<<j<<' '<<D[i].first<<" "<<D[i].second<<" "<<mn<<endl;
    }
    if(mn==Mod) mn=0;
    cout <<mn<<endl;
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


#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;
int n,k,p=1;
int D[limit],dp[4000000];
map<pair<int,int>, int> mymap;
int rec(int pos,int ct,int mnodd,int mneven)
{        cout <<pos<<" up "<<ct<<" "<<mnodd<<" "<<mneven<<endl;
    //if(mymap[mp(pos,ct)]) return dp[mymap[mp(pos,ct)]];
    if(ct>(n-pos))
        return Mod;
    if(ct==0)
    {
        return min(mneven,mnodd);
    }
    int mn1,mn2;
    mn1 = rec(pos+1,ct,mnodd,mneven);
    if(ct&1) mnodd = max(mnodd,D[pos]);
    else mneven = max(mneven,D[pos]);
    mn2 = rec(pos+1,ct-1,mnodd,mneven);  cout<<pos<<" dn "<<ct<<" "<<mn1<<" "<<mn2<<endl;
    mymap[mp(pos,ct)]=p++;
    dp[p-1] = min(mn1,mn2);
    return min(mn1,mn2);
}
void solve(int t)
{
    int i,j,m;
    cin >> n >>k;
    for(i=0; i<n; i++)
        cin >> D[i];
    cout <<rec(0,k,0,0)<<endl;
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



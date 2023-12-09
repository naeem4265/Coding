#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
using namespace std;
int m,B[limit];
bool vis[limit];
int BS(int u)
{
    int last_ind=-1;
    int l=0,r=m-1,mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(u>=B[mid])
        {
            l = mid+1;
            last_ind=mid;
        }
        else
            r = mid-1;
    }
    return last_ind;
}
void solve(int t)
{
    int ans = Mod,a,i;
    cin >> m;
    vector<pair<int,int> >mypair;
    for(i=0; i<m; i++)
    {
        cin >> B[i];
        mypair.pb(mp(i,B[i]));
    }
    sort(B,B+m);
    sort(mypair.begin(),mypair.end());
    for(i=0; i<m; i++)
    {
        a = mypair[i].second;
        int ind = BS(a);
        vis[ind]=1;  //cout <<a<<" "<<ind<<" "<<vis[ind-1]<<' '<<ans<<endl;
        if(ind<1) continue;
        if(vis[ind-1]) continue;   //cout <<B[ind]<<" "<<B[ind-1]<<endl;
        ans = min(ans,B[ind]-B[ind-1]);
    }
//    if(ans==Mod) cout <<0<<endl;
//    else
        cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}





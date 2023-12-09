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
    int i,j,k,n,m,ans=Mod;
    string s1,s2;
    cin >> s1 >> s2;
    n = s1.size();
    m = s2.size();
    for(i=0; i<=n-m; i++)
    {
        int ct=0;
        for(j=0,k=i; j<m; j++,k++)
        {
            if(s1[k]!=s2[j])
                ct++;
        }
        ans = min(ans,ct);
    }
    cout <<ans<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



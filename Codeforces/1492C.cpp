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
ll mx[limit],mn[limit];


void solve(int x)
{
    ll i,j,n,m,k;
    string s,t;
    cin >> n >> m;
    cin >> s >> t;
    n = s.size();
    m = t.size();
    for(i=0,j=0; i<m; i++)
    {
        for(; j<n; j++)
        {
            if(t[i]==s[j])
            {
                mn[i] = j;
                if(i==0)
                    mx[0] = j;
                break;
            }
        }
    }
    for(i=m-1,j=n-1; i>=0; i--)
    {
        for(; j>=0; j--)
        {
            if(t[i]==s[j])
            {
                mx[i] = j;
                if(i==m-1)
                    mn[i] = j;
                break;
            }
        }
    }
    ll ans = 1;
    for(i=1; i<m; i++)
    {
        ans = max(ans,mx[i]-mn[i-1]);      //cout<<i<<" "<<mn[i]<<" "<<mx[i]<<endl;
    }
    for(i=m-2; i>=0; i--)
    {
        ans = max(ans,mx[i+1]-mn[i]);      //cout<<i<<" "<<mn[i]<<" "<<mx[i]<<endl;
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
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

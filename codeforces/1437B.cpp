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
    int i,j,n,m,k,l=-1,ans=0,ans2=0,ct=-1;
    cin >> n;
    string s;
    cin >> s ;
    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
        {
            ans += max(ct,0);
            ct=-1;
        }
        else
            ct++;
    }
    ans += max(ct,0);
    ct=-1;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            ans2 += max(ct,0);
            ct = -1;
        }
        else
            ct++;
    }
    ans2 += max(ct,0);   //cout <<ans<<" "<<ans2<<endl;
    cout <<max(ans,ans2)<<endl;
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


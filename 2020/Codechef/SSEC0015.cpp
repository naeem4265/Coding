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
    int i,j,n,m,ans,l=1,LL=1,RR=1,mx=0;
    string s;
    cin >> s;
    n = s.size();
    ans = s[0]-'0';
    mx = ans;
    for(i=1; i<n; i++)
    {
        if(s[i-1]>s[i])
        {
            if(mx>ans)
            {
                ans = mx;
                LL=l;
                RR=i;
            }
            l=i+1;
            mx = s[i]-'0';
        }
        else
            mx += s[i]-'0';
    }
    cout <<ans<<":"<<LL<<"-"<<RR<<endl;
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



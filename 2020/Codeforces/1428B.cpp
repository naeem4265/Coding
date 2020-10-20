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
    string s;
    cin >> s;
    int ct=0,ans=0;
    for(i=1; i<=n; i++)
    {
        int x,y;
        x = i-1;
        y = i%n;
        if(s[y]=='-' || s[x]=='-')
        {
            ans++;
        }
    }
    ct = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='<')
        {
            ct = 1;
            break;
        }
    }
    if(ct==0)
    {
        cout <<n<<endl;
        return ;
    }
    ct = 0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='>')
        {
            ct = 1;
            break;
        }
    }
    if(ct==0)
    {
        cout <<n<<endl;
        return ;
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
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


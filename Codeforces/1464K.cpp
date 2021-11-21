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
ll obx,oby,n;
string s;

bool check()
{
    ll x=0,y=0,cx,cy;
    for(ll j=0; j<n; j++)
    {
        cx = x; cy = y;
        if(s[j]=='R') cx++;
        if(s[j]=='D') cy--;
        if(s[j]=='L') cx--;
        if(s[j]=='U') cy++;
        if(cx==obx && cy==oby) continue;
        x = cx; y = cy;
    }
    if(x==0 && y==0)
    {
        cout <<obx<<" "<<oby<<endl;
        return 1;
    }
    return 0;
}

void solve(ll tc)
{
    ll i,j,m,k;
    cin >> s ;
    n= s.size();
    obx=0; oby=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='R') obx++;
        if(s[i]=='D') oby--;
        if(s[i]=='L') obx--;
        if(s[i]=='U') oby++;
        if(check()) return;
    }
    cout <<0<<" "<<0<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}


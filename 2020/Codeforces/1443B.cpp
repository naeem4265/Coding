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
    ll i,j,n,m,k,a,b,l,r;
    cin >> a >> b;
    string s;
    cin >> s;
    n = s.size();
    for(i=0; i<n; i++)
        if(s[i]=='1')
            break;
    l = i;
    for(i=n-1; i>=0; i--)
        if(s[i]=='1')
            break;
    r = i;
    if(r<l)
    {
        cout <<0<<endl;
        return ;
    }
    vector<ll>dis;
    for(i=l+1; i<=r; i++)
    {
        if(s[i]=='1')
        {
            m = i-l-1;  //cout <<i<<" "<<l<<' '<<m<<endl;
            if(m)
                dis.pb(m);
            l = i;
        }
    }
    ll ct=dis.size()+1,ans =0;
    for(i=0; i<dis.size(); i++)
    {
        m = dis[i];
        if(m*b<=a)
        {
            ans += m*b;
            ct--;
        }
    }
    ans += ct*a;
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


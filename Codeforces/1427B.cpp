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
    int i,j,n,m,k,l=Mod;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> D;
    for(i=0; i<n; i++)
    {
        if(s[i]=='W')
        {
            l = i;
            break;
        }
    }
    int ans=0;
    if(l<Mod)
        ans = 1;
    int ct=ans;
    for(i=l+1; i<n; i++)
    {
        if(s[i]=='W')
        {
            t = i-l-1;
            if(t==0) ans++;
            else
                D.pb(t);
            l = i;
            ans++;
            ct++;
        }
    }
    sort(D.begin(),D.end());
    reverse(D.begin(),D.end());

    for(i=D.size()-1; i>=0; i--)
    {
        if(D[i]<=k)
        {
            ans += D[i]*2+1;
            k-= D[i];
            ct += D[i];
        }
        else
        {
            ans += k*2;
            ct += k;
            k = 0;
        }
    }
    if(k)
    {
        if(ct==0)
        {
            ans = min(k-1,n-1)*2+1;
        }
        else
        {
            ans += min(n-ct,k)*2;
        }
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


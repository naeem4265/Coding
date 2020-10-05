#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 1000008
using namespace std;
vector<ll> out;
void solve(int t)
{
    ll a,k,i,j,n,m,mx=0,ct=1,sum=0,c;
    cin >> n >> m;
    string s;
    cin >> s;
    for(i='a'; i<='z'; i++)
    {
        ct=0,c=0;
        for(j=0; j<n; j++)
        {
            if(s[j]==i)
            {
                ct += j+1;
                c++;
            }
        }
        out.pb(ct*c);
    }
    for(i='0'; i<='9'; i++)
    {
        ct=0,c=0;
        for(j=0; j<n; j++)
        {
            if(s[j]==i)
            {
                ct += j+1;
                c++;
            }
        }
        out.pb(ct*c);
    }
    ll ans = 0;
    sort(out.begin(),out.end());
    int sz=out.size();
    ct=0;
    for(i=0; i<sz; i++)
    {
        if(out[i]>=m)
        {
            n = sz-i-1;
            ans ++;
            ans += ((n+1)*n)/2;
            continue;
        }
        ct = ct+out[i];
        for(j=i+1; j<sz; j++)
        {
            if((ct+out[j])>=m)
            {
                n = sz-j-1;
                ans ++;
                ans += ((n+1)*n)/2;
                break;
            }
        }
    }
    cout <<ans<<endl;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
  //  cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}



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
    vector<int>v;
    for(i=0,j=0; i<n; i++)
    {
        if(s[j]!=s[i])
        {
            v.pb(i-j); // cout <<i<<" "<<j<<" "<<i-j<<endl;
            j = i;
        }
    }
    v.pb(i-j);
    int ans=0;
    int sz=v.size();
    for(i=0,j=0; i<sz; i++)
    {
        m = v[i];
        ans++;  //cout <<i<<" "<<m<<" "<<ans<<" "<<sz<<endl;
        if(m>1)
            continue;
        else
        {
            j = max(j,i+1);
            for(; j<sz; j++)
            {
                if(v[j]>2)
                {
                    v[j]--;
                    break;
                }
            }
            if(j<sz)
                continue;
            if(i<(sz-1))
            {
                v[i+1]--;
                if(v[i+1]==0)
                    i++;
            }
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
//Accepted

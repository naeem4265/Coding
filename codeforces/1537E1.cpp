#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,m,k,z;
    string s;
    cin >> n >> m;
    cin >> s;
    ll idx = n-1;
    ll ct = 1;
    for(i=1; i<n; i++)
    {
        if(s[i]!=s[0]) break;
    }
    if(i==n)
    {
        for(i=0; i<m; i++)
            cout <<s[0];
        cout << endl;
        return ;
    }
    ll str=i-1;
    for(i=1; i<n; i++)
    {
        if(s[i] > s[0])
        {
            idx = i-1;
            break;
        }
        if(s[i]==s[0])
        {
            for(j=0,k=i,z=0; k<n && z<i; j++,k++,z++)
            {
                if(s[k] > s[j])
                {
                    idx = i-1;
                    i = n;      //cout <<j<<" "<<s[j]<<" "<<k<<" "<<s[k]<<" "<<idx<<" here\n";
                    break;
                }
                if( s[k] < s[j])
                {
                    i = k-1;
                    break;
                }
            }
            if(z==i)
            {
                idx = k-1;
                i = k-1;
            }
        }
    }
    for(i=0,j=0; i<m; i++,j++)
    {
        cout << s[j];
        if(j==idx)
            j = -1;
    }
    cout << endl;
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

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

void solve(ll t)
{
    ll i,j,n,m,k;
    string s;
    cin >> n >> m;
    cin >> s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            for(j=i-1,k=m; k && j>=0; j--,k--)
            {
                s[j] = '1';
            }
            break;
        }
    }
    for(i=n-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            for(j=i+1,k=m; k && j<n; j++,k--)
            {
                s[j] = '1';
            }
            break;
        }
    }
    ll l,r;    //cout << s<<endl;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            for(j=i+1; j<n; j++)
            {
                if(s[j]=='1')
                {
                    for(l=i+1,r = j-1,t=m; t && l<r; l++,r--,t--)
                    {
                        s[l] = '1';      //cout <<l<<" "<<r<<" "<<i<<" "<<j<<endl;
                        s[r] = '1';
                    }
                    break;
                }
            }
            i = j-1;
        }
    }
    cout << s << endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

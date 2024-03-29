#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s, t;
    cin >> n;
    cin >> s >> t;
    for(i=0,j=0; i<n; i++)
    {
        if(t[i]=='c')
        {
            for( ; j<=n; j++)
            {
                if(j==n)
                {
                    cout <<"NO\n";
                    return ;
                }
                if(s[j]=='c')
                {
                    if(i>j)
                    {
                        cout <<"NO\n";
                        return ;
                    }
                    swap(s[i],s[j]);
                    j++;
                    break;
                }
                else if(j>=i && s[j]!='b')
                {
                    cout <<"NO\n";
                    return ;
                }
            }
        }
    }

    for(i=n-1,j=n-1; i>=0; i--)
    {
        if(t[i]=='a')
        {
            for( ; j>=-1; j--)
            {
                if(j==-1)
                {
                    cout <<"NO\n";
                    return ;
                }
                if(s[j]=='a')
                {
                    if(i<j)
                    {
                        cout <<"NO\n";
                        return ;
                    }
                    swap(s[i],s[j]);
                    j--;
                    break;
                }
                else if(j<=i && s[j]!='b')
                {
                    cout <<"NO\n";
                    return ;
                }
            }
        }
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s!=t)
    {
        cout <<"NO\n";
        return ;
    }

    cout <<"YES\n";
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

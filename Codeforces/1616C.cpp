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

void solve(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;
    ll d[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
    }
    ll ans = 1e18,x;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if((i-j)>0)
            {
                x = d[i] - d[i-j];
                if(x%(i-j))
                {
                    ll ct = 0;
                    for(k=i-1; k>0; k--)
                    {
                        if(k%(i-j)==i%(i-j))
                        {
                            if(d[k+j]!=(x+d[k]))
                                ct++;
                        }
                        else
                            ct++;
                    }
                    for(k=i+1; k<=n; k++)
                    {
                        if(k%(i-j)==i%(i-j))
                        {
                            if((d[k-j]+x)!=(d[k]))
                                ct++;
                        }
                        else
                            ct++;
                    }
                    ans = min(ans,ct);
                }
                else
                {
                    ll ct = 0;
                    x = x/(i-j);
                    for(k=i-1; k>0; k--)
                    {
                        if((d[k]+x)!=d[k+1])
                            ct++;
                    }
                    for(k=i+1; k<=n; k++)
                    {
                        if((d[k]-x)!=d[k-1])
                            ct++;
                    }
                    ans = min(ans,ct);
                }
            }
            if((i+j)<=n)
            {
                x = d[i] - d[i+j];
                if(x%(i-j))
                {
                    ll ct = 0;
                    for(k=i-1; k>0; k--)
                    {
                        if(k%(i-j)==i%(i-j))
                        {
                            if(d[k+j]!=(x-d[k]))
                                ct++;
                        }
                        else
                            ct++;
                    }
                    for(k=i+1; k<=n; k++)
                    {
                        if(k%(i-j)==i%(i-j))
                        {
                            if((d[k-j]-x)!=(d[k]))
                                ct++;
                        }
                        else
                            ct++;
                    }
                    ans = min(ans,ct);
                }
                else
                {
                    ll ct = 0;
                    x = x/(i-j);
                    for(k=i-1; k>0; k--)
                    {
                        if((d[k]-x)!=d[k+1])
                            ct++;
                    }
                    for(k=i+1; k<=n; k++)
                    {
                        if((d[k]+x)!=d[k-1])
                            ct++;
                    }
                    ans = min(ans,ct);
                }
            }
        }
    }
    cout << ans <<endl;
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

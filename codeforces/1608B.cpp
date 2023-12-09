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
    ll a,b;
    cin >> n >> a >> b;
    if(max(a,b)==0)
    {
        for(i=1; i<=n; i++)
            cout <<i<<" ";
        cout <<endl;
        return;
    }
    ll d[n+5];
    bool vis[n+5];
    memset(vis,0,sizeof(vis));

    for(i=1,j=n,k=1; k<=n; k++)
    {
        if(k&1)
        {
            d[k] = i;
            i++;
        }
        else
        {
            d[k] = j;
            j--;
        }
    }
    ll x = 0,y=0;
    for(i=2; i<n; i++)
    {
        if(d[i]>d[i-1] && d[i]>d[i+1])
        {
            x++;
            if(x==a && y==b)
            {
                for(j=1; j<=i; j++)
                {
                    cout <<d[j]<<" ";
                    vis[d[j]]=1;
                }
                for(j=d[i]; j>0; j--)
                {
                    if(vis[j]==0)
                    {
                        cout <<j<<" ";
                        vis[j]=1;
                    }
                }
                cout <<endl;
                return ;
            }
        }
        if(d[i]<d[i-1] && d[i]<d[i+1])
        {
            y++;
            if(x==a && y==b)
            {
                for(j=1; j<=i; j++)
                {
                    cout <<d[j]<<" ";
                    vis[d[j]]=1;
                }
                for(j=d[i]; j<=n; j++)
                {
                    if(vis[j]==0)
                    {
                        cout <<j<<" ";
                        vis[j]=1;
                    }
                }
                cout <<endl;
                return ;
            }
        }  //cout <<i<<" "<<x<<" "<<y<<" "<<d[i]<<endl;
    }

    for(i=1,j=n,k=1; k<=n; k++)
    {
        if(k&1)
        {
            d[k] = j;
            j--;
        }
        else
        {
            d[k] = i;
            i++;
        }
    }
    x = 0; y=0;
    for(i=2; i<n; i++)
    {
        if(d[i]>d[i-1] && d[i]>d[i+1])
        {
            x++;
            if(x==a && y==b)
            {
                for(j=1; j<=i; j++)
                {
                    cout <<d[j]<<" ";
                    vis[d[j]]=1;
                }
                for(j=d[i]; j>0; j--)
                {
                    if(vis[j]==0)
                    {
                        cout <<j<<" ";
                        vis[j]=1;
                    }
                }
                cout <<endl;
                return ;
            }
        }
        if(d[i]<d[i-1] && d[i]<d[i+1])
        {
            y++;
            if(x==a && y==b)
            {
                for(j=1; j<=i; j++)
                {
                    cout <<d[j]<<" ";
                    vis[d[j]]=1;
                }
                for(j=d[i]; j<=n; j++)
                {
                    if(vis[j]==0)
                    {
                        cout <<j<<" ";
                        vis[j]=1;
                    }
                }
                cout <<endl;
                return ;
            }
        }
    }
    cout <<-1 <<endl;
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

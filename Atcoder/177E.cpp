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
bool vis[limit],vis2[limit];
vector <int> prime;
void p()
{
    for(int i=4; i<limit; i+=2) vis[i]=1;
    for(int i=3; i*i<=limit; i+=2)
    {
        if(vis[i]==0)
            for(int j=i*i; j<limit; j+=i*2)
                vis[j]=1;
    }
    prime.pb(2);
    for(int i=3; i<limit; i+=2)
        if(vis[i]==0)
            prime.pb(i);
}
void solve(int t)
{
    int i,j,n,m,ck=0;
    scanf("%d",&n);
    int D[n+5];
    for(i=0; i<n; i++)
        scanf("%d", &D[i]);
    m = D[0];
    for(i=1; i<n; i++)
    {
        m = __gcd(m,D[i]);
    }
    if(m>1)
    {
        cout <<"not coprime\n";
        return ;
    }
    for(i=0; i<n; i++)
    {
        if(ck) break;
        if(vis[D[i]]==0 && D[i]>1)
        {
            if(vis2[D[i]])
            {
                ck = 1;
                break;
            }
            vis2[D[i]]=1;
            continue;
        }
        for(j=0; prime[j]*prime[j]<=D[i]+1; j++)
        {
            int ct=0;
            while(D[i]%prime[j]==0)
            {
                ct = 1;
                D[i] /= prime[j];
            }
            if(ct)
            {
                if(vis2[prime[j]])
                {
                    ck = 1;
                    break;
                }
                vis2[prime[j]]=1;
            }
        }
        if(D[i]>1)
            {
                if(vis2[D[i]])
                {
                    ck = 1;
                    break;
                }
                vis2[D[i]]=1;
            }
    }
    if(ck)
    {
        cout <<"setwise coprime\n";
    }
    else
        cout <<"pairwise coprime\n";
    return;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    p();
    int t,tt=1;
 //   cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


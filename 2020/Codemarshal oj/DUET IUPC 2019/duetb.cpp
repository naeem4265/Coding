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
bool vis[limit];
vector <int> prime,ind[limit];
int L,R,F,mid;
int ans[limit];

void seive()
{
    for(int i=3; i*i<=limit; i+=2)
    {
        if(vis[i]==0)
        for(int j=i*i; j<limit; j+=2*i)
            vis[j] = 1;
    }
    prime.pb(2);
    for(int i=3; i<limit; i+=2)
        if(vis[i]==0){
            prime.pb(i);
        }
}
void BS(int At,int key)
{
    L=0; R=ind[At].size()-1; F=-1;  //cout <<L<<" "<<R<<" "<<At<<" "<<key<<" BS\n";
    while(L<=R)
    {
        mid = (L+R)/2;
        if(ind[At][mid]>=key)
        {
            F=mid;
            R=mid-1;
        }
        else
        {
            L=mid+1;
        }
    }
}
void solve(int t)
{
    int a,b,k,i,j,n,mx=0,ct=1,sum=0;
    //cin >> n >> k;
    scanf("%d %d",&n,&k);
    map <int,int> mymap;
    mymap.clear();
    int D[n+5];
    for(i=1; i<=n; i++) scanf("%d",&D[i]);
    for(j=0; prime[j]*prime[j]<=D[1]+1; j++)
    {
        ct = 0;
        while(D[1]%prime[j]==0)
        {
            D[1] /= prime[j];
            ct = 1;
        }
        if(ct)
        {
            if(mymap[prime[j]]==0)
            {
                ind[prime[j]].clear();
                mymap[prime[j]]=1;
            }
            ind[prime[j]].pb(1);
        }
    }
    if(D[1]>1)
    {
        if(mymap[D[1]]==0)
        {
            ind[D[1]].clear();
            mymap[D[1]]=1;
        }
        ind[D[1]].pb(1);
    }
    ans[0]=0;
    ans[1]=0;
    for(i=2; i<=n; i++)
    {
        ans[i] = ans[i-1]+1;
        //cout <<i<<" "<<ans[i]<<endl;
        for(j=0; prime[j]*prime[j]<=D[i]+1; j++)
        {
            ct = 0;
            while(D[i]%prime[j]==0)
            {
                D[i] /= prime[j];
                ct = 1;
            }
            if(ct)
            {    //cout <<i<<" "<<prime[j]<<endl;
                if(mymap[prime[j]]==0)
                {
                    ind[prime[j]].clear();
                    mymap[prime[j]]=1;
                }
                BS(prime[j],max(1,i-k));
                if(F>=0)
                {     //cout <<F<<" paice "<<R<<endl;
                    int sz=ind[prime[j]].size(),l;
                    for(int l=F; l<sz; l++)
                    {
                        F=ind[prime[j]][l];  //cout <<i<<" up "<<F<<" "<<ans[F]<<" "<<ans[i]<<endl;
                        ans[i] = min(ans[i],ans[F]+1);
                    }
                }
                ind[prime[j]].pb(i);
            }
        }
        if(D[i]>1)
        {
            if(mymap[D[i]]==0)
            {
                ind[D[i]].clear();
                mymap[D[i]]=1;
            }
            BS(D[i],max(1,i-k));
            if(F>=0)
            {
                int sz=ind[D[i]].size(),l;
                for(int l=F; l<sz; l++)
                {
                    F=ind[D[i]][l];     // cout <<i<<" dn "<<F<<" "<<ans[F]<<" "<<ans[i]<<endl;
                    ans[i] = min(ans[i],ans[F]+1);
                }
            }
            ind[D[i]].pb(i);
        }
        //cout <<ans[i]<<endl;
    }
    //cout <<"Case "<<t<<": "<<ans[n] <<endl;
    printf("Case %d: %d\n",t,ans[n]);
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
    //cin >> tt;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}
/*
1
9 4
13 5 9 11 8 7 24 18 23
*/

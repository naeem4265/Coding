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
bool vis[limit];
void seive()
{
    vis[0]=vis[1]=1;
    int i,j;
    for(i=4; i<limit; i+=2) vis[i]=1;
    for(i=3; i*i<limit; i+=2)
        for(j=i*i; j<limit; j+=2*i)
            vis[j]=1;
}
void solve(int t)
{
    int i,j,a,b,l,r,ct=0;
    cin >> a >> b;
    l = (a/2*b/2);
    r = a*b;
    vector<int > prime;
    for(i=a; i<=b; i++)
        if(vis[i]==0)
            prime.pb(i);
    int sz=prime.size();
    for(i=0; i<sz; i++)
        for(j=i+1; j<sz; j++)
            if((prime[i]*prime[j])>=l && (prime[i]*prime[j])<=r)
                cout <<prime[i]<<","<<prime[j]<<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}



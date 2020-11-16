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
int closest[limit];
bool vis[2000000];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<2000000; i+=2) vis[i] = 1;
    for(int i=3; i*i<2000000; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<2000000; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<2000000; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}

void solve(int t)
{
    int i,j,n,m,k;
    scanf("%d",&n);
    printf("%d\n",closest[n]);

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int i=0,j=2,left,right;
    seive();
    closest[1] = closest[2] = 2;
    left = 2; right = 3;
    for(i=3; i<limit; i++)
    {
        if(vis[i]==0)
        {
            closest[i] = i;
            left = i;
            right = prime[j++];
        }
        else if(i-left<=right-i) closest[i] = left;
        else   closest[i] = right;       // cout <<left<<" "<<i<<" "<<right<<" "<<closest[i]<<endl;
    }
    int t,tt=1;
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


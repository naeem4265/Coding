#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 50022
using namespace std;
bool vis[limit];
vector<int> prime;
int ct[limit];
void seive()
{
    int i,j;
    for(i=3; i*i<=limit; i+=2)
    {
        if(!vis[i])
        for(j=i*i; j<limit; j+=2*i)
            vis[j]=1;
    }
    prime.pb(2);
    for(i=3; i<limit; i+=2)
        if(!vis[i])
            prime.pb(i);
}
void Set()
{
    int i,j,k = 0;
    for(i=1; i<=50001; i++)
    {
        while(i>=prime[k]) k++;
        for(j=k-1; j>=0; j--)
        {
            if((i-prime[j])==prime[j])
                continue;
            ct[i] = min(ct[i],1+ct[i-prime[j]]);   //cout <<i<<" "<<ct[i]<<" "<<prime[j]<<endl;
            if(ct[i]<=2) break;
        }
    }
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int i,t,tt=1,n;
    seive();

    for(i=1; i<limit; i++)
        ct[i] = Mod;
    ct[0]=0;
    Set();
    scanf("%d",&tt);
    for(t=1; t<=tt; t++)
    {
        scanf("%d",&n);
        if(ct[n]>limit)
            printf("Case %d: -1\n",t);
        else
            printf("Case %d: %d\n",t,ct[n]);
    }
    return 0;
}


#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 31700
using namespace std;

bool vis[limit];
vector<int>prime;
void seive()
{
    vis[0]=vis[1]=1;
    for(int i=4; i<limit; i+=2) vis[i] = 1;
    for(int i=3; i*i<limit; i+=2)
    {
        if(vis[i]) continue;
        for(int j=i*i; j<limit; j+=2*i)
        {
            vis[j] = 1;
        }
    }
    prime.pb(2);
    for(int j=3; j<limit; j+=2)
        if(vis[j]==0)
            prime.pb(j);
}


void solve()
{
    ll i,j,n,m,k;
    string s;
    ll a,b;
    scanf("%d %d %d", &a, &b, &k);
    if(a>b)
        swap(a,b);
    if(k==1)
    {
        if(a!=b && b%a==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        return ;
    }
    ll mx = 0;
    for(i=0; prime[i]*prime[i]<=a; i++)
    {
        while(a%prime[i]==0)
        {
            mx++;
            a = a/prime[i];
        }
    }
    if(a>1) mx++;
                       // cout << mx <<" ";
    for(i=0; prime[i]*prime[i]<=b; i++)
    {
        while(b%prime[i]==0)
        {
            mx++;
            b = b/prime[i];
        }
    }
    if(b>1) mx++;
                            //cout << mx << endl;
    if(mx>=k)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    scanf("%d", &tt);
    seive();

//    for(ll i=1; i<limit; i++)
//        cout << ct[i] <<" ";
    for(t=1; t<=tt; t++)
        solve();
    return 0;
}

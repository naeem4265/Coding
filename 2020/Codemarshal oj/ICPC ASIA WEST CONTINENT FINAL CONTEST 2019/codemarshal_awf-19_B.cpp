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
    for(int i=4; i<limit; i+=2) vis[i]=1;
    for(int i=3; i*i<=limit; i+=2)
    {
        if(!vis[i])
        for(int j=i*i; j<limit; j+=2*i)
            vis[j]=1;
    }
}
void solve(int t)
{
    ll n,i,j,x,y,z=0,pre=10,cur=1,d;
    cin >> n;
    while(n)
    {
        d = n%10;
        n /= 10;
        x = n*pre;
        pre *= 10;
        if(n)
            i = 0;
        else
            i = 1;
        for(; i<10; i++)
        {
            y = i*cur;
            if(!vis[x+y+z])
            {
                cout <<"yes\n";
                return ;
            }
        }
        z = d*cur+z;
        cur *= 10;
    }
    cout <<"no\n";
    return;
}
int  main()
{
    Fast
//    Freed
//    Fout
    seive();
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
  return 0;
}


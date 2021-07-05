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
ll coprime[limit];

///seive O(n*logn)
bool vis[limit];
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
}

int  main()
{
//    Fast
//    Freed
//    Fout
    /// Totient O(n*logn)
    seive();
    for(int i=2; i<limit; i++) coprime[i]=i;
    for(int i=2; i<limit; i++)
    {
        if(!vis[i])
            for(int j=i; j<limit; j+=i)
                coprime[j] = (coprime[j]*(i-1))/i;
    }


    for(int i=1; i<limit; i++)
    {
        cout <<i<<" "<<coprime[i]<<endl;
    }

    return 0;
}


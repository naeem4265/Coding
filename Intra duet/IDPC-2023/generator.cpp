#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("case0.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200000
using namespace std;

ll take(ll l, ll h)
{
    const ll range_from  = l;
    const ll range_to    = h;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<ll>  distr(range_from, range_to);
    ll n,k;
    n = distr(generator);
    return n;
}

int main(int, char*[])
{
    Fout;
    ll t=100,i,j;

        const ll range_from  = 1;
        const ll range_to    = 100000;
        std::random_device                  rand_dev;
        std::mt19937                        generator(rand_dev());
        std::uniform_int_distribution<ll>  distr(range_from, range_to);
        ll n,m=100,b;
        cout <<m<<endl;
        bool vis[m+5];
        memset(vis, 0, sizeof(vis));
        for(i=0; i<m; ){
            ll r,R,H,P,x=100;
            r = take(1, m);
            if(vis[r])  continue;
            vis[r] = 1;
            cout <<r<<" ";
            i++;
        }
        cout <<endl;
        memset(vis, 0, sizeof(vis));
        for(i=0; i<m; ){
            ll r,R,H,P,x=100;
            r = take(1, m);
            if(vis[r])  continue;
            vis[r] = 1;
            cout <<r<<" ";
            i++;
        }
        cout <<endl;
}


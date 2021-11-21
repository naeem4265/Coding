#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("case20.txt","w",stdout);
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
    const int range_from  = l;
    const int range_to    = h;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);
    ll n,k;
    n = distr(generator);
    return n;
}

int main(int, char*[])
{
    Fout;
    ll t=100,i,j;

        const int range_from  = 1;
        const int range_to    = 1000;
        std::random_device                  rand_dev;
        std::mt19937                        generator(rand_dev());
        std::uniform_int_distribution<int>  distr(range_from, range_to);
        ll n,m,ct=0;
        n = take(2,200000);
        m = take(1, min(200000LL,n*(n+1)/2));
        n = 200000;
        m = min(200000LL,n*(n+1)/2);
        cout << n<<' '<<m<<endl;
        map<pair<ll,ll> , bool>mymap;
        while( ct<m )
        {
            const int range_from  = 1;
            const int range_to    = n;
            std::random_device                  rand_dev;
            std::mt19937                        generator(rand_dev());
            std::uniform_int_distribution<int>  distr(range_from, range_to);
            ll u,v,w;
            u = distr(generator);
            v = distr(generator);
            w = take(1,1000000000);
            //w = 1000000000;
            if(u!=v && mymap[{u,v}]==0 && mymap[{v,u}]==0)
            {
                cout << u <<' '<<v<<' '<<w<<endl;
                mymap[{u,v}] = 1;
                mymap[{v,u}] = 1;
                ct++;
            }
        }
        cout <<endl;
}


#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("case4.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200000
using namespace std;

ll gen(ll l,ll r)
{
    const int range_from  = l;
    const int range_to    = r;
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(range_from, range_to);
    ll x = distr(generator);
    return x;
}

int main(int, char*[])
{
    Fout;
    ll t=100000,i,j;
    cout <<t<<endl;
    for(ll i=0; i<t; i++)
    {
        ll n,m,k;
        n = gen(2,100000000000000000);
        m = gen(2,n);
        k = gen(1,m-1);
        cout <<n<<' '<<m<<' '<<k<<endl;
    }

}

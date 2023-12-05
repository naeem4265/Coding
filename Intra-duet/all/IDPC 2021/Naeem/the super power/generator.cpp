#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("case7.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200000
using namespace std;

int main(int, char*[])
{
    Fout;
    ll t=100000,i,j;
    cout <<t<<endl;
    for(ll i=0; i<t; i++)
    {
        const int range_from  = 1;
        const int range_to    = 5;
        std::random_device                  rand_dev;
        std::mt19937                        generator(rand_dev());
        std::uniform_int_distribution<int>  distr(range_from, range_to);
        ll n,k;
        n = distr(generator);
        k = distr(generator);
        cout << n<<' '<<k-1<<endl;
        if(1)
        {
            const int range_from  = 1;
            const int range_to    = 100;
            std::random_device                  rand_dev;
            std::mt19937                        generator(rand_dev());
            std::uniform_int_distribution<int>  distr(range_from, range_to);

            for (ll j=0; j<n; j++)
                cout << distr(generator) << ' ';
        }
        cout <<endl;
    }

}

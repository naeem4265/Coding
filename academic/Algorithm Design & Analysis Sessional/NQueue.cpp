#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 10008
#include <chrono>
using namespace std::chrono;
using namespace std;

ll x[limit],ct;

bool place(ll k,ll i)
{
    for(ll j=1; j<k; j++)
    {
        if((x[j]==i) || abs(x[j]-i)==abs(j-k))
            return false;
    }
    return true;
}

void NQueens(ll k,ll n)
{
    for(ll i = 1; i<=n; i++)
    {
        if(place(k,i))
        {
            x[k] = i;
            if(k==n)
            {
                ct++;
            }
            else
                NQueens(k+1,n);
            x[k] = 0;
        }
    }
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1;
    x[0] = 1;
    ll n=15;
    //cin >> n;
    auto start = high_resolution_clock::now();
    NQueens(1,n);
    cout << ct <<endl;
    //auto stop = high_resolution_clock::now();
   // auto duration = duration_cast<microseconds>(stop - start);
    //cout << endl<< duration.count() << endl;
    return 0;
}

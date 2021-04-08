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

ll d[limit],m,n;
vector<ll> out;

void SumofSubset(ll s,ll k,ll r)
{
    if(k>n) return ;
    if(s+d[k]==m)
    {          cout <<"paici \n";
        out.push_back(d[k]);
        for(ll i=0; i<out.size(); i++)
            cout <<out[i]<<" "; cout << endl;
        out.pop_back();
        return;
    }
    if(s+d[k]<m)
    {
        out.push_back(d[k]);
        SumofSubset(s+d[k],k+1,r-d[k]);
        out.pop_back();
    }
    if(s+r>=m)
    {
        SumofSubset(s,k+1,r-d[k]);
    }
}

int  main()
{
//    Fast
//    Freed
//    Fout
    ll i,r=0;
    cin >> n >> m;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        r += d[i];
    }
    SumofSubset(0,1,r);
    return 0;
}

/*
6 30
5 10 12 13 15 18
*/

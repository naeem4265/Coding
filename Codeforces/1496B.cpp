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

void solve(ll t)
{
    ll i,j,n,m,k=0;
    string s;
    cin >> n >> t;
    set<ll> v;
    set<ll> :: iterator it;
    for(i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        v.insert(a);
    }

    for(k=0; k<n; k++)
    {
        if(v.find(k)==v.end())
            break;
    }
    it = v.end();
    it--;
    while(t)
    {
        if(k==n)
        {
            cout <<t+v.size()<<endl;
            return ;
        }
        m = (*it+k+1)/2;
        v.insert(m);
        if(m!=k)
        {
            break;
        }
        else
        {
            while(v.find(k)!=v.end())
                k++;
        }
        t--;
    }
    cout << v.size() <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

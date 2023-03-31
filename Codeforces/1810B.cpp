#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    if(n%2==0)
    {
        cout <<-1<<endl;
        return;
    }
    vector<ll> v;
    while(n>1)
    {
        if(((n-1)/2)&1)
        {
            v.pb(2);
            n/=2;
        }
        else
        {
            v.pb(1);
            n /= 2;
            n++;
        }

    }
    cout <<v.size()<<endl;
    for(i=v.size()-1; i>=0; i--)    cout <<v[i]<<" ";   cout <<endl;

    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


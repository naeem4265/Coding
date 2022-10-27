#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n;
    ll d[n+5];
    ll pos=0,neg=0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        if(d[i]>0) pos++;
        else if(d[i]<0)  neg++;
    }
    if((pos+neg)&1)
    {
        cout <<-1<<endl;
        return ;
    }
    ll l=1,r=2;
    vector<pair<ll,ll> > v;
    d[n+1] = d[n+2] = 100;

    while(pos>=neg && l<=n)
    {
        if(pos>neg && d[r]==1)
        {
            v.pb({r-1, r});
            pos--;
            neg++;
            r++;
            l = r;
        }
        else if(r>l)
        {
            v.pb({l,l});
            l++;
        }
        r++;
    }

    while(pos<=neg && l<=n)
    {
        if(pos<neg && d[r]==-1)
        {
            v.pb({r-1, r});
            pos++;
            neg--;
            r++;
            l = r;
        }
        else if(r>l)
        {
            v.pb({l,l});
            l++;
        }
        r++;
    }
    cout <<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout <<v[i].first<<" "<<v[i].second<<endl;
    }

    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

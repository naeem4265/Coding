#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;


void Please_AC(ll tt)
{
    ll i,j,n,m,k=3,q;

    cin >> n;
    ll d12, d23, d13;
    ll u,v;

    cin >> d12 >> d23 >> d13;
    if((d12+d23+d13)==2LL*max({d12, d23, d13}))
    {
        cout<<"YES\n";
        if(d12==max({d12, d23, d13}))
        {
            u = 3;
            for(i=1; i<d23; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<2<<endl;
            u = 3;
            for(i=1; i<d13; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<1<<endl;
        }
        if(d13==max({d12, d23, d13}))
        {
            u = 2;
            for(i=1; i<d12; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<1<<endl;
            u = 2;
            for(i=1; i<d23; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<3<<endl;
        }
        if(d23==max({d12, d23, d13}))
        {
            u = 1;
            for(i=1; i<d12; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<2<<endl;
            u = 1;
            for(i=1; i<d13; i++)
            {
                cout <<u<<" "<<++k<<endl;
                u = k;
            }
            cout <<u<<" "<<3<<endl;
        }
        for(; k<n; )
            cout <<1<<" "<<++k<<endl;

        return ;
    }
    if(max({d12,d23,d13})*2LL>(d12+d23+d13))
    {
        cout <<"No\n";
        return ;
    }
    ll x1,x2,x3;
    x1 = d12+d13-d23;
    x2 = d12-d13+d23;
    x3 = -d12+d13+d23;
    if(x1&1 || x2&1 || x3&1)
    {
        cout <<"No\n";
        return ;
    }
    x1 /= 2;
    x2 /= 2;
    x3 /= 2;
    if((4+x1-1+x2-1+x3-1)>n)
    {
        cout <<"No\n";
        return ;
    }
    u = 4;
    k = 4;
    cout <<"YES\n";
    for(i=1; i<x1; i++)
    {
        cout <<u<<" "<<++k<<endl;
        u = k;
    }
    cout <<u<<" "<<1<<endl;
    u = 4;
    for(i=1; i<x2; i++)
    {
        cout <<u<<" "<<++k<<endl;
        u = k;
    }
    cout <<u<<" "<<2<<endl;
    u = 4;
    for(i=1; i<x3; i++)
    {
        cout <<u<<" "<<++k<<endl;
        u = k;
    }
    cout <<u<<" "<<3<<endl;
    for(; k<n; )
            cout <<1<<" "<<++k<<endl;
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

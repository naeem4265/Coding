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

ll bigmod(ll b,ll p)
{
    ll ans=1;
    while(p)
    {
        if(p&1)
            ans = (ans*b);
        b = (b*b);
        p = p/2;
    }
    return ans;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,x;
    string s;
    cin >> m;

    n = bigmod(2, m);

    vector<ll > v1,v2;
    v1.clear();
    v2.clear();

    for(i=1; i<=n; i++)
    {
        v1.pb(i);
    }

    while(1)
    {
        ll sz = v1.size();
        if(sz==1)
        {
            cout <<"! ";
            cout <<v1[0] <<endl;
            cout.flush();
            return ;
        }
        if(sz==2)
        {
            cout <<"? "<<v1[0]<<" "<<v1[1]<<endl;
            cin >> x;
            cout <<"! ";
            if(x==1)
            {
                cout <<v1[0]<<endl;
                cout.flush();
                return ;
            }
            else
            {
                cout <<v1[1]<<endl;
                cout.flush();
                return ;
            }
        }
        v2.clear();
        for(i=0; i<sz; i+=4)
        {
            cout <<"? "<<v1[i]<<" "<<v1[i+2]<<endl;
            cin >> x;
            if(x==0)
            {
                cout <<"? "<<v1[i+1]<<" "<<v1[i+3]<<endl;
                cin >> x;
                if(x==1)
                    v2.pb(v1[i+1]);
                else
                    v2.pb(v1[i+3]);
            }
            else if(x==1)
            {
                cout <<"? "<<v1[i]<<" "<<v1[i+3]<<endl;
                cin >> x;
                if(x==1)
                    v2.pb(v1[i]);
                else
                    v2.pb(v1[i+3]);
            }
            else
            {
                cout <<"? "<<v1[i+1]<<" "<<v1[i+2]<<endl;
                cin >> x;
                if(x==1)
                    v2.pb(v1[i+1]);
                else
                    v2.pb(v1[i+2]);
            }
        }
        v1.clear();
        sz = v2.size();
        v1 = v2;
        v2.clear();
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
    cout.flush();
    return 0;
}

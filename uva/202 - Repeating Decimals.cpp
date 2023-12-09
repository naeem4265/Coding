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

void solve(ll a,ll b)
{
    ll i,j,n,m,k=1;
    vector<ll> out;
    map<ll,ll>mymap;
    mymap.clear();
    out.pb(a/b);
    ll temp = a%b;
    while(1)
    {
        if(mymap[temp])
        {
            cout <<a<<"/"<<b<<" = ";
            for(i=0; i<k; i++)
            {
                if(i==1)
                {
                    cout <<".";
                }
                if(i==mymap[temp])
                {
                    cout <<"(";
                }
                cout <<out[i];
                if(i==50)
                {
                    cout <<"...";
                    cout <<")\n   "<<k-mymap[temp]<<" = number of digits in repeating cycle\n\n";
                    return ;
                }
            }
            cout <<")\n   "<<k-mymap[temp]<<" = number of digits in repeating cycle\n\n";
            return ;
        }
        mymap[temp] = k++;
        temp = temp*10;
        out.pb(temp/b);
        temp = temp%b;
    }

    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll t,tt=1,a,b;
    while(cin >> a >> b)
        solve(a,b);
    return 0;
}
//Accepted

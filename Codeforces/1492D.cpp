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

void solve(int t)
{
    ll i,j,n,m;
    string s;
    ll a,b,k;
    cin >> a >> b >> k ;
    if(k>=(a+b) || (k && b==1) || (k && a==0))
    {
        cout <<"No\n";
        return ;
    }


    if(k==0)
    {
        cout <<"Yes\n";
        for(i=0; i<b; i++) cout <<1;
        for(i=0; i<a; i++) cout <<0;
        cout <<endl;
        for(i=0; i<b; i++) cout <<1;
        for(i=0; i<a; i++) cout <<0;
        cout <<endl;
        return ;
    }
    vector<ll>x,y;

    n = a+b;
    y.pb(1);
    b--;
    b--;
    for(i=0; i<k; i++)
    {
        if(a)
        {
            a--;
            x.pb(0);
            y.pb(0);    cout <<0<<endl;
        }
        else
        {
            if(b==0)
            {
                cout <<"No\n";
                return ;
            }
            b--;
            x.pb(1);
            y.pb(1);         cout <<1<<endl;
        }
    }
    x.pb(1);
    cout <<"Yes\n";
    cout <<1;
    for(i=x.size()-1; i>=0; i--) cout <<x[i];
    for(i=0; i<a; i++) cout <<0;
    for(i=0; i<b; i++) cout <<1; cout <<endl;
    cout <<1;
    for(i=y.size()-1; i>=0; i--) cout <<y[i];
    for(i=0; i<a; i++) cout <<0;
    for(i=0; i<b; i++) cout <<1; cout <<endl;


    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

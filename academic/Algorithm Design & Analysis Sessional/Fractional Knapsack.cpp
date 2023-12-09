#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 1000008
using namespace std;

void solve(ll t)
{
    ll i,j,n,mx,c;
    cout << "Enter number of items:\n";
    cin >> n;
    cout << "Enter maximum beg weight he can carry:\n";
    cin >> mx;
    ll w[n+5];
    for(i=0; i<n; i++)
    {
        cout << "Enter "<<i+1<<"th item weight:\n";
        cin >> w[i];
    }
    vector<pair<double,ll> > v;
    for(i=0; i<n; i++)
    {
        cout << "Enter "<<i+1<<"th item value:\n";
        cin >> c;
        v.pb(mp((double)c/w[i],i));
    }
    sort(v.begin(),v.end());
    ll profit = 0;
    cout <<endl;
    for(i=n-1; i>=0; i--)
    {
        cout <<"From "<<v[i].second+1<<" item ";
        if(mx > w[v[i].second])
        {
            cout << w[v[i].second] <<" weight taken.\n";
            profit += v[i].first * w[v[i].second];
            mx -= w[v[i].second];
        }
        else
        {
            cout << mx <<" weight taken.\n";
            profit += v[i].first * mx;
            mx = 0;
            break;
        }
    }

    cout << "\n\nTotal Profit is : "<< profit << endl;
    return ;
}
int  main()
{
    Freed
    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

/*
Input format:
5 60
5 10 15 22 25
30 40 45 77 90
*/

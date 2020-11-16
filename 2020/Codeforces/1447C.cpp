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
    ll i,j,n,m,k,W,sum=0,a;
    cin >> n >> W;
    vector<pair<ll,ll> >w;
    for(i=1; i<=n; i++)
    {
        cin >> a ;
        sum += a;
        if(a<=W)
            w.pb(mp(a,i));
    }
    if(w.size()==0 || sum<(W+1)/2)
    {
        cout <<-1<<endl;
        return ;
    }
    sort(w.begin(),w.end());
    sum = 0;
    vector<ll> out;
    for(i=w.size()-1; i>=0; i--)
    {
        if((sum+w[i].first)<=W)
        {
            sum += w[i].first;
            out.pb(w[i].second);
        }
        if(sum>=(W+1)/2)
        {
            cout <<out.size()<<endl;
            for(j=out.size()-1; j>=0; j--)
            {
                cout <<out[j]<<" ";
            }
            cout <<endl;
            return ;
        }
    }
    cout <<-1<<endl;
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


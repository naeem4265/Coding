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
    int i,j,n,a,k;
    cin >> n ;
    vector<pair<int,int> >d(n);
    for(i=0; i<n; i++)
    {
        cin >> a;
        d[i]=mp(a,i);
    }
    sort(d.begin(),d.end());
    if(d[0].first==d[n-1].first)
    {
        cout <<"YES\n0\n";
        return ;
    }
    bool ok=0;
    int ind=0,bit=0;
    for(i=0; i<31; i++)
    {
        a = 1<<i;
        int ct=0;
        for(j=0; j<n; j++)
        {
            if(d[j].first & a)
            {
                ct++;
                t = d[j].second;
            }
        }
        if(ct&1)
        {
            if(ok)
            {
                cout <<"NO\n";
                return ;
            }
            ind = t;
            bit = a;
            ok=1;
        }
    }
    vector<int>out;
    for(i=30; i>=0; i--)
    {
        a = 1<<i;
        if(a==bit)  continue;
        sort(d.begin(),d.end());
        for(j=n-1; j>=0; j--)
        {
            if(d[j].second==ind)  continue;
            if(d[j].first & a)
            {
                out.pb(d[j].second);  //cout<<ind<<" "<<bit<<" " <<a<<" "<<d[j].first<<" "<<d[j].second<<endl;
            }
        }
    }
    cout <<"YES\n";
    cout <<out.size()/2<<endl;
    for(i=0; i<out.size(); i+=2)
    {
        cout <<ind+1<<" "<<out[i]+1<<" "<<out[i+1]+1<<endl;
    }
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    int t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}


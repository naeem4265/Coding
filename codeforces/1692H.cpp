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
vector<pair<ll,ll> >v;
ll n;
ll a,l,r;

bool check(ll x)
{
    if(x==1)
    {
        a = v[0].first; l = v[0].second; r = v[0].second;
        return 1;
    }
    for(ll i=0; i<n; i++)
    {
        ll b=i,h=n-1,m,len=i;
        while(b<=h)
        {
            m = (b+h)/2;
            if(v[i].first == v[m].first)
            {
                b = m+1;
                len = m;
            }
            else
                h = m-1;
        }   //cout <<x<<" "<<i<<" "<<v[i].first<<" "<<v[i].second<<" ";
            //cout <<len<<" "<<v[len].first<<" "<<v[len].second<<endl;
        ll pre = v[i].second,ct = 1;
        for(ll j=i+1; j<=len; j++)
        {
            ct++;
            if((pre+1)!=v[j].second)
            {
                ct -= (v[j].second-pre-1);
            }
            pre = v[j].second;
            if(ct<=1)
            {
                i = j;
                ct = 1;
            }
            if(ct>=x)
            {
                a = v[i].first;
                l = v[i].second;
                r = v[j].second;
                return 1;
            }
        }
        i = len;
    }
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,m;
    v.clear();
    cin >> n;
    ll d;
    for(i=0; i<n; i++)
    {
        cin >> d;
        v.pb({d,i});
    }
    sort(v.begin(), v.end());
    ll b=1, h=n;
    while(b<=h)
    {
        m = (b+h)/2;
        if(check(m))
        {
            b = m+1;  //cout <<m<<" banaite parci\n";
        }
        else
        {
            h = m-1;  //cout <<m<<" banaite parinai\n";
        }
    }
    cout <<a<<" "<<l+1<<" "<<r+1<<endl;

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

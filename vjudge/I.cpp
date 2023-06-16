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
    ll i,j,n,m,k,q,l;
    string s;
    cin >> n >> q >> k;
    ll d[n+5];
    char ch;
    ll from[n+5];
    memset(from, 0, sizeof(from));

    for(i=0; i<n; i++)  cin >> d[i];
    for(l=0; l<n; l++)
    {
        if(d[i]==0)   break;
    }
    vector<pair<ll,ll > > v;

    v.pb({0, l});

    for(i=n-1,j=0; i>=0; i--)
    {
        if(d[i]==0)  break;
        j++;
    }
    if(i<0)
    {
        while(q--)
        {
            cin >> ch;
            if(ch=='?')  cout <<k<<endl;
        }
        return;
    }
    v.pb({i+1, j});

    vector<pair<ll,ll> > v2;
    for(j=l+1; j<i; j++)
    {
        if(d[j])
        {
            for(k=j+1; k<i; k++)
            {
                if(d[k]==0)
                {
                    v2.pb({j, k-j});
                    break;
                }
            }
            j = k;
        }
    }
    sort(v2.begin(), v2.end());
    reverse(v2.begin(), v2.end());
    m = v2.size();
    m = min(m, 2LL);
    for(i=0; i<m; i++)
    {
        v.pb(v2[i]);
    }
    ll ct = 0;

    sort(v.begin(), v.end());
    m = v.size();
    while(q--)
    {
        cin >> ch;
        if(ch=='?')
        {
            ll ans = 0;
            for(i=0; i<m; i++)
            {
                ans = max(ans, v[i].second);
            }
            cout <<ans <<endl;
        }
        else
        {
            for(i=0; i<m; i++)
            {
                v[i].first = (v[i].first+)%n;
            }
            for(i=0; i<m; i++)
            {
                if((v[i].second+v[i].first)>n)
                {
                    v[i].second--;
                    for(j=0; j<m; j++)
                    {
                        if(v[j].first==0)  v[j].second++;
                    }
                }
            }
        }
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
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

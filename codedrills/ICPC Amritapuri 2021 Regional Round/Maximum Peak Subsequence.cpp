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
    ll i,j,n,m,k,q;
    cin >> n >> k;
    ll d[n+5];
    for(i=0; i<n; i++)
        cin >> d[i];

    vector<ll> v;
    ll ct = 1;
    v.pb(d[0]);
    for(i=1; i<n; i++)
    {
        if(ct & 1)
        {
            if(v[ct-1] < d[i])
            {
                ct++;
                v.pb(d[i]);
            }
            else
                v[ct-1] = d[i];
        }
        else
        {
            if(v[ct-1] > d[i])
            {
                ct++;
                v.pb(d[i]);
            }
            else
                v[ct-1] = d[i];
        }
    }
    if(ct>=k)
    {
        for(i=0; i<k; i++)   cout << v[i] <<" ";
        cout << endl;
        return ;
    }
    k -= min(ct, k);
    for(i=0,j=0; j<v.size(); i++)
    {
        if(d[i]==v[j])
        {
            cout << d[i] <<" ";
            j++;
        }
        else if(k)
        {
            cout << d[i] <<" ";
            k--;
        }
    }
    cout << endl;
    return ;
}


int  main()
{
    Fast
    //Freed
    //Fout
    ll t,tt=1;
    cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}


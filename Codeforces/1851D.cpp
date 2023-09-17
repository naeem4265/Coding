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

bool check(ll ans[], ll n)
{
    ll i;
    for(i=1; i<=n; i++)
    {
        if(ans[i-1] != i)   break;
    }
    if(i>n)
        return 1;
    return 0;
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n;

    ll d[n+5];
    for(i=1; i<n; i++)
    {
        cin >> d[i];
    }
    for(i=1,j=n+n-1; i<n; i++)
    {
        if(d[i]>j)
        {
            cout <<"NO1\n";
            return;
        }
        j += n-i;
    }
    vector<ll> v;
    d[0] = 0;
    ll cnt[n+5];
    memset(cnt, 0, sizeof(cnt));
    for(i=1; i<n; i++)
    {
        v.pb(d[i]-d[i-1]);
        cnt[d[i]-d[i-1]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(cnt[i]==0)    d[0] = i;      //cout <<i<<" "<<cnt[i]<<endl;
    }
    ll ans[n+5];
    ans[0] = d[0];
    ans[1] = v[0]-d[0];
    for(i=1; i<n-1; i++)
    {
        ans[i+1] = v[i];
    }
    sort(ans, ans+n);
    if(check(ans, n))
    {
        cout <<"YES\n";
        return;
    }
    ans[0] = v[0];
    for(i=1; i<n-1; i++)
    {
        if(cnt[v[i]]>1 || v[i]>n)
        {
            ans[i] = d[0];
            ans[i+1] = v[i]-d[0];
            for(j=i+1, i=i+2; j<n-1; j++,i++)
                ans[i] = v[j];
            sort(ans, ans+n);
            if(check(ans, n))
            {
                cout <<"YES\n";
                return;
            }
            else
            {
                cout <<"NO2\n";
                return;
            }
        }
        else
            ans[i] = v[i];
    }
    if(check(ans, n))
    {
        cout <<"YES\n";
        return;
    }
    cout <<"NO3\n";


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

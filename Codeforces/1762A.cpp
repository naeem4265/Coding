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
    cin >> n;
    ll d[n+5];
    ll sum = 0, ans = 1e18;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        sum += d[i];
        if(d[i] & 1)
        {
            ll ct = 0;
            while(d[i] &1 )
            {
                ct++;
                d[i] /= 2;
            }
            ans = min(ans, ct);
        }
        else
        {
            ll ct = 0;
            while(d[i]%2==0 )
            {
                ct++;
                d[i] /= 2;
            }
            ans = min(ans, ct);
        }
    }
    if(sum%2==0)   ans = 0;
    cout << ans <<endl;
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


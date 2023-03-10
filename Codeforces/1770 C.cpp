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
    ll odd=0,even=0;
    for(i=0; i<n; i++)
    {
        cin >> d[i];
        if(d[i]&1)   odd++;
        else         even++;
    }
    sort(d,d+n);
    for(i=1; i<n; i++)
    {
        if(d[i]==d[i-1] || (odd>1 && even>1 ))
        {
            cout <<"No\n";
            return;
        }

    }

    cout <<"Yes\n";
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


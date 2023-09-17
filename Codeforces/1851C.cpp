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
    string s;
    cin >> n >> k;
    ll col[n+5];
    for(i=0; i<n; i++)
    {
        cin >> col[i];
    }
    for(i=1,j=1; i<n && j<k; i++)
    {
        if(col[i]==col[0])   j++;
    }
    if(j<k)
    {
        cout <<"NO\n";
        return;
    }
    if(col[0]==col[n-1])
    {
        cout <<"YES\n";
        return;
    }
    for(j=1; i<n && j<=k; i++)
    {
        if(col[i]==col[n-1])   j++;
    }
    if(j<=k)
    {
        cout <<"NO\n";
        return;
    }
    cout <<"YES\n";


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

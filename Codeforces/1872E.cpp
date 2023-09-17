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
    ll cumxor[n+5];
    cumxor[0] = 0;
    ll a[n+5];
    for(i=1; i<=n; i++)
    {
        cin >> a[i];
        cumxor[i] = cumxor[i-1]^a[i];
    }
    string s;
    cin >> s;
    ll onexor=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            onexor ^= a[i+1];
        }
    }
    cin >> q;
    while(q--)
    {
        cin >> tt;
        ll l,r,g;
        if(tt==1)
        {
            cin >> l >> r;
            onexor = onexor^(cumxor[r]^cumxor[l-1]);
        }
        else
        {
            cin >> g;
            if(g)   cout << onexor <<" ";
            else    cout << (cumxor[n]^onexor) << " ";
        }
    }
    cout <<endl;



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

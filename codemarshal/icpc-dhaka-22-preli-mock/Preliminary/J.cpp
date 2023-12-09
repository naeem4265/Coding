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
    ll ans = 0,st[n+5],ed[n+5];
    st[0] = 0;
    ed[0] = 0;

    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        ans += d[i];
        st[i] = ed[i-1]+1;
        ed[i] = st[i]+d[i]-1;  // cout <<i<<" "<<st[i]<<" "<<ed[i]<<endl;
    }
    if(k==1)
    {
        cout <<ans <<endl;
        return;
    }
    for(i=1; i<=n; i++)
    {
        st[i] = max(ed[i]+1, ed[i-1]+1);
        ll pre = ed[i];
        ed[i] = st[i]+d[i]-1;  //cout <<i<<" "<<st[i]<<" "<<ed[i]<<endl;
        if(i==n)
        {
            cout <<(ed[i]-pre)*(k-1)+pre<<endl;
            return;
        }

    }

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
        cout <<"Case "<<t<<": ";
        Please_AC(t);
    }
    return 0;
}



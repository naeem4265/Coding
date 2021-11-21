#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 100008
using namespace std;
///www.spoj.com/problems/KALTSUM/


const ll block = 350 ;
ll d[limit],cum[limit],PS[350][limit];

void solve(ll t)
{
    ll i,j,n,m,k,q;
    string s;
    cin >> n >> q;
    //block = sqrt(n);


    cum[0] =0;
    for(i=1; i<=n; i++)
    {
        cin >> d[i];
        cum[i] = cum[i-1]+d[i];
    }

    memset(PS, 0, sizeof(PS));
    for(k=1; k<block; k++)
    {
        for(ll pos=n; pos > n-k; pos--)
            PS[k][pos] = d[pos]+PS[k][pos+1];
        for(ll pos=n-k+1; pos>0; pos--)
        {
            PS[k][pos] = (cum[pos+k-1]-cum[pos-1]) - PS[k][pos+k];
            //cout <<k<<" "<<pos<<" "<<PS[k][pos]<<endl;
        }
    }

    for(i=0; i<q; i++)
    {
        ll l,r;
        cin >> l >> k;
        ll ans = 0;
        if(k>=block)
        {
            ll sign = 1;
            for(j=l; j<=n; j+=k)
            {
                r = j+k-1;
                if(r>n) r = n;
                ans += (cum[r]-cum[j-1])*sign;
                sign = sign*-1;
            }
        }
        else
        {
            ans = PS[k][l];
        }
        //cout << ans <<endl;
        if(ans==0)
            cout  <<"Draw\n";
        else if(ans>0)
            cout <<"Alice\n";
        else
            cout <<"Bob\n";
    }
    return ;
}
int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
//    cin >> tt;
    for(t=1; t<=tt; t++)
        solve(t);
    return 0;
}

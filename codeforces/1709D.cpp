#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
#define inf 1e18
#define Mod 1000000007
#define limit 200008
using namespace std;
ll pt[20][limit],h[limit];

ll query(ll l, ll r)
{
    if(l>r) return 0;
    if(l==r)  return h[l];
    ll ct=18, k;
    k = 1<<18;
    while(k > (r-l))
    {
        ct--;
        k = k>>1;
    } //cout <<ct<<" "<<k<<endl;
    return max(pt[ct][l], query(l+k,r));
}

void Please_AC(ll tt)
{
    ll i,j,n,m,k;

    cin >> n >> m;
    for(i=1; i<=m; i++)
    {
        cin >> h[i];
        pt[0][i] = h[i];
    }
    k = 1;
    for(i=1; i<=18; i++)
    {
        k = 1 << (i-1);
        for(j=1; (j+k)<=m; j++)
        {
            pt[i][j] = max(pt[i-1][j], pt[i-1][j+k]);
            //cout <<i<<" "<<j<<" "<<pt[i][j]<<endl;
        }
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll xs, ys, xf, yf, k;
        cin >> xs >> ys >> xf >> yf >> k;
        if(ys > yf)
        {
            swap(xs, xf);
            swap(ys, yf);
        }
        ll mx = query(ys+1, yf-1);
        ll top = n-xs;
        top = top/k;
        top = top*k;
        top = xs+top;
        //cout <<mx<<" "<<top<<endl;
        //cout <<xs-xf<<" "<<yf-ys<<endl;
        if(top<=mx || (abs(xs-xf)%k || (yf-ys)%k))
        {
            cout <<"NO\n";
        }
        else
            cout <<"YES\n";
    }
    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
    //cin >> tt;
    for(t=1; t<=tt; t++)
        Please_AC(t);
    return 0;
}

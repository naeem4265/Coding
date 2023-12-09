#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define Mod 1000000007
#define limit 200008
using namespace std;

struct stc
{
    ll h,w,i;
};
bool operator<(stc a,stc b)
{
    if(a.h!=b.h) return a.h<b.h;
    return a.w<b.w;
}

void solve(ll tc)
{
    ll i,j,n,m,k;
    cin >> n ;
    ll h,w;
    stc D[n+5];
    for(i=0; i<n; i++)
    {
        cin >> h >> w;
        if(h<w) swap(h,w);
        D[i].h=h;
        D[i].w=w;
        D[i].i=i+1;
    }
    sort(D,D+n);

    //for(i=0; i<n; i++) cout <<D[i].h<<" "<<D[i].w<<' '<<D[i].i<<endl;

    ll ans[n+5];
    h = D[0].h;
    w = D[0].w;
    ll id=D[0].i;
    ans[D[0].i] =-1;
    for(i=1,j=1; i<n; i++)
    {
        while(j<i)
        {
            if(D[j].h>=D[i].h)  break;

            if(w>D[j].w)
            {
                w = D[j].w;
                h = D[j].h;
                id = D[j].i;
            }
            j++;
        }
        if(h<D[i].h && w<D[i].w)
            ans[D[i].i] = id;
        else
            ans[D[i].i] = -1;
    }
    for(i=1; i<=n; i++) cout <<ans[i]<<' ';
    cout <<endl;
    return ;
}
int  main()
{
//    Fast
//    Freed
//    Fout
    ll tc,tt=1;
    cin >> tt;
    for(tc=1; tc<=tt; tc++)
        solve(tc);
    return 0;
}



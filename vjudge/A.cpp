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
    ll i,j,k,l,W,H, n, h, w;
    cin >> H >> W >> n >> h >> w;
    ll cnt[n+5];
    memset(cnt, 0, sizeof(cnt));
    ll d[H+5][W+5];
    ll ct = 0;
    for(i=0; i<H; i++)
    {
        for(j=0; j<W; j++)
        {
            cin >> d[i][j];
            if(cnt[d[i][j]]==0)
            {
                ct++;
            }
            cnt[d[i][j]]++;
        }
    }
    ll ans = 0;

    ll keep[H+5][W+5];
    for(i=0; i<=(H-h); i++)
    {
        memset(cnt, 0, sizeof(cnt));
        ct = 0;
        for(j=0; j<W; j++)
        {
            for(k=0; k<H; k++)
            {
                if(cnt[d[k][j]]==0)  ct++;
                cnt[d[k][j]]++;
            }
        }
        for(k=0; k<h; k++)
        {
            for(j=0; j<w; j++)
            {
                cnt[d[i+k][j]]--;
                if(cnt[d[i+k][j]]==0)  ct--;
            }
        }
        for(j=0; j<=(W-w); j++)
        {
            if(j==0)
            {
                keep[i][j] = ct;
                continue;
            }
            for(k=0; k<h; k++)
            {
                if(cnt[d[k+i][j-1]]==0)   ct++;
                cnt[d[k+i][j-1]]++;
            }
            for(k=0; k<h; k++)
            {
                cnt[d[k+i][j+w-1]]--;
                if(cnt[d[k+i][j+w-1]]==0)   ct--;
            }
            keep[i][j] = ct;
        }
    }
    for(i=0; i<=(H-h); i++)
    {      //cout <<endl<<i<<" here "<<endl;
        for(j=0; j<=(W-w); j++)
        {      //cout <<endl<<j<<" here2\n";
            cout <<keep[i][j]<<" ";
        }
        cout <<endl;
    }



    return ;
}


int  main()
{
    Fast
//    Freed
//    Fout
    ll t,tt=1;
   // cin >> tt;
    for(t=1; t<=tt; t++)
    {
        //printf("Case :%lld ",t);
        Please_AC(t);
    }
    return 0;
}

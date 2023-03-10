#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

void Please_AC(ll tt)
{
    ll i,j,n,m,k,q;
    cin >> n >> m;
    ll d[n+2][m+2], cnt[n+2][m+2];

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin >> d[i][j];
        }
    }

    ll l=1,h=n,mid, ans=1;
    for(i=0; i<=n; i++)   cnt[i][0] = 0;
    for(j=0; j<=m; j++)   cnt[0][j] = 0;
    while(l<=h)
    {
        mid = (l+h)/2;   //cout <<l<<" "<<h<<" "<<mid<<" "<<ans<<endl;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(d[i][j]<mid)  cnt[i][j] = 0;
                else
                {
                    cnt[i][j] = min(cnt[i-1][j], cnt[i][j-1]);
                    ll x = cnt[i][j];
                    if(x==0 || cnt[i-x][j-x])  cnt[i][j]++;
                    if(cnt[i][j]==mid)
                    {
                        l = mid+1;
                        ans = mid;
                        i = n+10;
                        j = m+10;
                    }
                }
            }
        }       //cout <<i<<endl;
        if(i-1==n)
            h = mid-1;
    }
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


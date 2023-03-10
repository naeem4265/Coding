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
    ll i,j,l,n,m,k,q;
    cin >> n >> m;
    ll d[n+5];
    for(i=0; i<n; i++)
    {
        cin >> d[i];
    }
    if(m==1)
    {
        cout <<0<<endl;
        return;
    }
    sort(d, d+n);
    d[n] = 0;
    ll fre[m+5];
    memset(fre, 0, sizeof(fre));
    ll ans = Mod,cnt=0;

    for(i=0,l=0; i<=n; i++)
    {
        while(cnt==m)
        {
            for(j=1; j*j<=d[l]; j++)
            {
                if(d[l]%j==0)
                {
                    if(j<=m)
                    {
                        fre[j]--;
                        if(fre[j]==0)  cnt--;
                    }
                    if((d[l]/j)<=m)
                    {
                        fre[d[l]/j]--;
                        if(fre[d[l]/j]==0)   cnt--;
                    }
                }
            }
            l++;
            if(cnt==m)
                ans = min(ans, d[i-1]-d[l]);
        }
        for(j=1; j*j<=d[i]; j++)
        {
            if(d[i]%j==0)
            {
                if(j<=m)
                {
                    if(fre[j]==0)   cnt++;
                    fre[j]++;
                }
                if((d[i]/j)<=m)
                {
                    if(fre[d[i]/j]==0)   cnt++;
                    fre[d[i]/j]++;
                }
            }
        }
        if(cnt==m)
        {
            ans = min(ans, d[i]-d[l]);
        }      //cout <<i<<" "<<l<<" "<<cnt<<" "<<ans<<endl;
    }
    if(ans>=Mod)  ans = -1;
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

